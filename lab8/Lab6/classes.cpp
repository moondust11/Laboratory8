#include "stdafx.h"
#include "classes.h"
#include "Exceptions.h"
#include <cstdlib>
#include <iostream>

using namespace std;

//Блок методов класса cake
void cake::set()
{
	cout << "Введите название: "; cin >> name;
	if (name == "")
		throw EmptyStr("cake::set()");
	cout << "Введите вес: "; cin >> weight;
	if (!isdigit(weight))
		throw NoInt("cake::set()");
	cout << "Введите цену: "; cin >> price;
	if (!isdigit(price))
		throw NoInt("cake::set()");
}
void cake::set(string Name)
{
	if (Name == "")
		throw EmptyStr("cake::set(string Name)");
	name = Name;
}
void cake::set(int Price)
{
	price = Price;
}
void cake::set(int Weight, int Price)
{
	weight = Weight;
	price = Price;
}
void cake::set(string Name, int Weight, int Price)
{
	if (Name == "")
		throw EmptyStr("cake::set(string Name, int Weight, int Price)");
	name = Name;
	weight = Weight;
	price = Price;
}
void cake::get()
{
	cout << "1)" << name << endl;
	cout << "2)Вес " << weight << endl;
	cout << "3)Цена " << price << endl;
}
void cake::get(cake obj)
{
	if (obj.price == NULL)
	{
		cout << " Не имеется.\n";
		return;
	}
	obj.get();
}