#pragma once

#include "D1.h"
#include "D2.h"

#include <iostream>

class D3: public D1, protected D2
{

protected:

	int m_member;

public:

	D3(int, int, int, int, int);
	~D3();

	void show(){ std::cout << std::endl; std::cout << "Значение объекта класса D3: " << m_member << std::endl; };

};

D3::D3(int innerValue = 4, int valueD1 = -22, int valueD2 = -33, int valueB1 = -111, int valueB2 = -333)
	: m_member{innerValue}, D1{valueD1, valueB1},
	D2{valueD2, valueB1, valueB2}, B1{valueB1}
{

	std::cout << std::endl;
	std::cout << "Сработал конструктор D3!!!" << std::endl;
	show();

}

D3::~D3()
{

	std::cout << std::endl;
	std::cout << "Сработал диструктор D3!!!" << std::endl;
	std::cout << std::endl;

}

