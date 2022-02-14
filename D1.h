#pragma once

#include <iostream>

#include "B1.h"

class D1: virtual public B1
{

protected:

	int m_member;

public:

	D1(int, int);
	~D1();

	void show(){ std::cout << std::endl; std::cout << "Значение объекта класса D1: " << m_member << std::endl; };

};

D1::D1(int innerValue = 2, int valueB1 = -1): m_member{innerValue}, B1{valueB1}
{
	
	std::cout << std::endl;
	std::cout << "Сработал конструктор D1!!!" << std::endl;
	show();

}

D1::~D1()
{

	std::cout << std::endl;
	std::cout << "Сработал диструктор D1!!!" << std::endl;
	std::cout << std::endl;

}

