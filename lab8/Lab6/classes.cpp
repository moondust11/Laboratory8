#include "stdafx.h"
#include "classes.h"
#include "Exceptions.h"
#include <cstdlib>
#include <iostream>

using namespace std;

//���� ������� ������ cake
void cake::set()
{
	cout << "������� ��������: "; cin >> name;
	if (name == "")
		throw EmptyStr("cake::set()");
	cout << "������� ���: "; cin >> weight;
	if (!isdigit(weight))
		throw NoInt("cake::set()");
	cout << "������� ����: "; cin >> price;
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
	cout << "2)��� " << weight << endl;
	cout << "3)���� " << price << endl;
}
void cake::get(cake obj)
{
	if (obj.price == NULL)
	{
		cout << " �� �������.\n";
		return;
	}
	obj.get();
}