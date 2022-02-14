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

//Вариант-21

void WorkWithB1()
{

	int value{};

	std::cout << "Создание объекта класса B1" << std::endl;
	std::cout << "Введите целое число для объекта: ";
	std::cin >> value;
	std::cout << std::endl;

	B1 objB1{ value };

}

void WorkWithB2()
{

	int value{};

	std::cout << "Создание объекта класса B2" << std::endl;
	std::cout << "Введите целое число для объекта: ";
	std::cin >> value;
	std::cout << std::endl;

	B2 objB2{ value };

}

void WorkWithD1()
{

	int innerValue{};
	int valueB1{};

	std::cout << "Создание объекта класса D1" << std::endl;
	std::cout << "Введите целое число для поля объекта: ";
	std::cin >> innerValue;
	std::cout << std::endl;

	std::cout << "Введите целое число для B1: ";
	std::cin >> valueB1;
	std::cout << std::endl;

	std::cout << "Иерархия классов: " << std::endl;

	D1 objD1{ innerValue, valueB1 };

}

void WorkWithD2()
{

	int innerValue{};
	int valueB1{};
	int valueB2{};

	std::cout << "Создание объекта класса D2" << std::endl;
	std::cout << "Введите целое число для поля объекта: ";
	std::cin >> innerValue;
	std::cout << std::endl;

	std::cout << "Введите целое число для B1: ";
	std::cin >> valueB1;
	std::cout << std::endl;

	std::cout << "Введите целое число для B2";
	std::cin >> valueB2;
	std::cout << std::endl;

	std::cout << "Иерархия классов: " << std::endl;

	D2 objD2{ innerValue, valueB1, valueB2 };

}

void WorkWithD3()
{

	int innerValue{};
	int valueB1{};
	int valueB2{};
	int valueD1{};
	int valueD2{};

	std::cout << "Создание объекта класса D3" << std::endl;
	std::cout << "Введите целое число для поля объекта: ";
	std::cin >> innerValue;
	std::cout << std::endl;

	std::cout << "Введите целое число для D1: ";
	std::cin >> valueD1;
	std::cout << std::endl;

	std::cout << "Введите целое число для D2: ";
	std::cin >> valueD2;
	std::cout << std::endl;

	std::cout << "Введите целое число для B1: ";
	std::cin >> valueB1;
	std::cout << std::endl;

	std::cout << "Введите целое число для B2: ";
	std::cin >> valueB2;
	std::cout << std::endl;

	std::cout << "Иерархия классов: " << std::endl;

	D3 objD3{innerValue, valueD1, valueD2, valueB1, valueB2};

}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice{-1};

	std::cout << "Вариант наследования 21" << std::endl;

	while (choice != 0)
	{

		std::cout << "Выберите действие: " << std::endl;
		std::cout << "0 - Выйти из программы;" << std::endl;
		std::cout << "1 - Создать объект класса В1;" << std::endl;
		std::cout << "2 - Создать объект класса B2;" << std::endl;
		std::cout << "3 - Создать объект класса D1;" << std::endl;
		std::cout << "4 - Создать объект класса D2;" << std::endl;
		std::cout << "5 - Создать объект класса D3." << std::endl;
		std::cout << "Введите номер действия: ";
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