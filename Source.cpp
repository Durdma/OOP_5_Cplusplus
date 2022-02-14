#define NOMINMAX

#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <climits>
#include <cmath>

#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"

//�������-21

void WorkWithB1()
{

	int value{};

	std::cout << "�������� ������� ������ B1" << std::endl;
	std::cout << "������� ����� ����� ��� �������: ";
	std::cin >> value;
	std::cout << std::endl;

	B1 objB1{ value };

}

void WorkWithB2()
{

	int value{};

	std::cout << "�������� ������� ������ B2" << std::endl;
	std::cout << "������� ����� ����� ��� �������: ";
	std::cin >> value;
	std::cout << std::endl;

	B2 objB2{ value };

}

void WorkWithD1()
{

	int innerValue{};
	int valueB1{};

	std::cout << "�������� ������� ������ D1" << std::endl;
	std::cout << "������� ����� ����� ��� ���� �������: ";
	std::cin >> innerValue;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� B1: ";
	std::cin >> valueB1;
	std::cout << std::endl;

	std::cout << "�������� �������: " << std::endl;

	D1 objD1{ innerValue, valueB1 };

}

void WorkWithD2()
{

	int innerValue{};
	int valueB1{};
	int valueB2{};

	std::cout << "�������� ������� ������ D2" << std::endl;
	std::cout << "������� ����� ����� ��� ���� �������: ";
	std::cin >> innerValue;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� B1: ";
	std::cin >> valueB1;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� B2";
	std::cin >> valueB2;
	std::cout << std::endl;

	std::cout << "�������� �������: " << std::endl;

	D2 objD2{ innerValue, valueB1, valueB2 };

}

void WorkWithD3()
{

	int innerValue{};
	int valueB1{};
	int valueB2{};
	int valueD1{};
	int valueD2{};

	std::cout << "�������� ������� ������ D3" << std::endl;
	std::cout << "������� ����� ����� ��� ���� �������: ";
	std::cin >> innerValue;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� D1: ";
	std::cin >> valueD1;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� D2: ";
	std::cin >> valueD2;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� B1: ";
	std::cin >> valueB1;
	std::cout << std::endl;

	std::cout << "������� ����� ����� ��� B2: ";
	std::cin >> valueB2;
	std::cout << std::endl;

	std::cout << "�������� �������: " << std::endl;

	D3 objD3{innerValue, valueD1, valueD2, valueB1, valueB2};

}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice{-1};

	std::cout << "������� ������������ 21" << std::endl;

	while (choice != 0)
	{

		std::cout << "�������� ��������: " << std::endl;
		std::cout << "0 - ����� �� ���������;" << std::endl;
		std::cout << "1 - ������� ������ ������ �1;" << std::endl;
		std::cout << "2 - ������� ������ ������ B2;" << std::endl;
		std::cout << "3 - ������� ������ ������ D1;" << std::endl;
		std::cout << "4 - ������� ������ ������ D2;" << std::endl;
		std::cout << "5 - ������� ������ ������ D3." << std::endl;
		std::cout << "������� ����� ��������: ";
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == 1)
		{

			WorkWithB1();

		}

		if (choice == 2)
		{

			WorkWithB2();

		}

		if (choice == 3)
		{

			WorkWithD1();

		}

		if (choice == 4)
		{

			WorkWithD2();

		}

		if (choice == 5)
		{

			WorkWithD3();

		}

	}

}