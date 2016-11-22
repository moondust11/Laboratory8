#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "classes.h"
#include "Exceptions.h"

using namespace std;

void new_term()
{
	cout << "Не найдено улавливающего блока, соответствующего исключению.\nЗавершение программы." << endl;
	exit(1);
}
void new_unex()
{
	cout << "Сформировано неизвестное исключение \"Unexpected\"" << endl;
	terminate();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	set_terminate(new_term);
	set_unexpected(new_unex);

	//Ситуация переполнения списка
	try 
	{
		List <int, cake> First;
		First.add(5);
		First.add(10);
		First.add(15);
		First.add(20);
		First.add(4);
		First.add(6);
		First.add(8);
		First.add(4);
		First.add(23);
		First.add(50);
		First.get();
	}
	catch (bad_alloc)
	{
		cerr << "Не удалось выделить память под элемент, ошибка." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "ОШИБКА\nПроизошло переполнение списка. Виновник: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "ОШИБКА\nНевозможно работать с элементами пустого списка. Виновник: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "ОШИБКА\nБыл выполнен ввод неверного значения: " << obj.num << "\nВиновник: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "ОШИБКА\nВведённая строка является пустой. Виновник: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "ОШИБКА\nВведённое значение не является числом. Виновник: " << obj.reason << endl;
	}
	cout << "\n\n";
	//Ситуация, иллюстрирующая попытки работы с элементами списка, когда он пуст
	try
	{
		List <int, cake> First;
		First.get();
	}
	catch (bad_alloc)
	{
		cerr << "Не удалось выделить память под элемент, ошибка." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "ОШИБКА\nПроизошло переполнение списка. Виновник: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "ОШИБКА\nНевозможно работать с элементами пустого списка. Виновник: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "ОШИБКА\nБыл выполнен ввод неверного значения: " << obj.num << "\nВиновник: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "ОШИБКА\nВведённая строка является пустой. Виновник: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "ОШИБКА\nВведённое значение не является числом. Виновник: " << obj.reason << endl;
	}
	cout << "\n\n";
	//Ситуация ввода неверного значения
	try
	{
		List <int, cake> First;
		First.add(6);
		First.del();
	}
	catch (bad_alloc)
	{
		cerr << "Не удалось выделить память под элемент, ошибка." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "ОШИБКА\nПроизошло переполнение списка. Виновник: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "ОШИБКА\nНевозможно работать с элементами пустого списка. Виновник: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "ОШИБКА\nБыл выполнен ввод неверного значения: " << obj.num << "\nВиновник: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "ОШИБКА\nВведённая строка является пустой. Виновник: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "ОШИБКА\nВведённое значение не является числом. Виновник: " << obj.reason << endl;
	}
	cout << "\n\n";
	//Ситуация ввода пустой строки
	try
	{
		cake Cake("", 20, 30);
		List <int, cake> First;
		First.add(6);
		First.setDessert(Cake);
	}
	catch (bad_alloc)
	{
		cerr << "Не удалось выделить память под элемент, ошибка." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "ОШИБКА\nПроизошло переполнение списка. Виновник: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "ОШИБКА\nНевозможно работать с элементами пустого списка. Виновник: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "ОШИБКА\nБыл выполнен ввод неверного значения: " << obj.num << "\nВиновник: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "ОШИБКА\nВведённая строка является пустой.\nВиновник: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "ОШИБКА\nВведённое значение не является числом. Виновник: " << obj.reason << endl;
	}
	cout << "\n\n";
	//Проверка на число
	try
	{
		cake Cake;
		Cake.set();
		List <int, cake> First;
		First.add(6);
		First.setDessert(Cake);
	}
	catch (bad_alloc)
	{
		cerr << "Не удалось выделить память под элемент, ошибка." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "ОШИБКА\nПроизошло переполнение списка. Виновник: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "ОШИБКА\nНевозможно работать с элементами пустого списка. Виновник: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "ОШИБКА\nБыл выполнен ввод неверного значения: " << obj.num << "\nВиновник: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "ОШИБКА\nВведённая строка является пустой.\nВиновник: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "ОШИБКА\nВведённое значение не является числом. Виновник: " << obj.reason << endl;
	}
	cout << "\n\n";
	//Работа new_term()
	try
	{
		List <int, cake> First;
		First.add(6);
		First.del();
	}
	catch (bad_alloc)
	{
		cerr << "Не удалось выделить память под элемент, ошибка." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "ОШИБКА\nПроизошло переполнение списка. Виновник: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "ОШИБКА\nНевозможно работать с элементами пустого списка. Виновник: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "ОШИБКА\nВведённая строка является пустой. Виновник: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "ОШИБКА\nВведённое значение не является числом. Виновник: " << obj.reason << endl;
	}
    return 0;
}

