#pragma once

#include <iostream>

class B1
{

protected:

	int m_member;

public:

	B1(int);
	~B1();

	void show(){ std::cout << std::endl; std::cout << "Значение объекта класса B1: " << m_member << std::endl; };

};

B1::B1(int value = 0): m_member{value}
{
	
	std::cout << std::endl;
	std::cout << "Сработал конструктор B1!!!" << std::endl;
	show();

}

B1::~B1()
{
	std::cout << std::endl;
	std::cout << "Сработал диструктор В1!!!" << std::endl;
	std::cout << std::endl;

}