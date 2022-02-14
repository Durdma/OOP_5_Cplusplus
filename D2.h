#pragma once

#include "B1.h"
#include "B2.h"

#include <iostream>

class D2: virtual protected B1, public B2
{

protected:

	int m_member;

public:

	D2(int, int, int);
	~D2();

	void show(){ std::cout << std::endl; std::cout << "Значение объекта класса D2: " << m_member << std::endl; };

};

D2::D2(int innerValue = 3, int valueB1 = -11, int valueB2 = -2)
	: m_member{innerValue}, B1{valueB1}, B2{valueB2}
{

	std::cout << std::endl;
	std::cout << "Сработал конструктор D2!!!" << std::endl;
	show();

}

D2::~D2()
{

	std::cout << std::endl;
	std::cout << "Сработал диструктор D2!!!" << std::endl;
	std::cout << std::endl;

}

