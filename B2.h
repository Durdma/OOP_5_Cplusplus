#pragma once

#include <iostream>

class B2
{

protected:

	int m_member;

public:

	B2(int);
	~B2();

	void show(){ std::cout << std::endl; std::cout << "Значение объекта класса B2: " << m_member << std::endl; };

};

B2::B2(int value = 1): m_member{ value }
{

	std::cout << std::endl;
	std::cout << "Сработал конструктор В2!!!" << std::endl;
	show();
	
}

B2::~B2()
{

	std::cout << std::endl;
	std::cout << "Сработал диструктор В2!!!" << std::endl;
	std::cout << std::endl;

}
