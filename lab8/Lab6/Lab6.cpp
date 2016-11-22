#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "classes.h"
#include "Exceptions.h"

using namespace std;

void new_term()
{
	cout << "�� ������� ������������� �����, ���������������� ����������.\n���������� ���������." << endl;
	exit(1);
}
void new_unex()
{
	cout << "������������ ����������� ���������� \"Unexpected\"" << endl;
	terminate();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	set_terminate(new_term);
	set_unexpected(new_unex);

	//�������� ������������ ������
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
		cerr << "�� ������� �������� ������ ��� �������, ������." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "������\n��������� ������������ ������. ��������: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "������\n���������� �������� � ���������� ������� ������. ��������: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "������\n��� �������� ���� ��������� ��������: " << obj.num << "\n��������: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "������\n�������� ������ �������� ������. ��������: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "������\n�������� �������� �� �������� ������. ��������: " << obj.reason << endl;
	}
	cout << "\n\n";
	//��������, �������������� ������� ������ � ���������� ������, ����� �� ����
	try
	{
		List <int, cake> First;
		First.get();
	}
	catch (bad_alloc)
	{
		cerr << "�� ������� �������� ������ ��� �������, ������." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "������\n��������� ������������ ������. ��������: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "������\n���������� �������� � ���������� ������� ������. ��������: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "������\n��� �������� ���� ��������� ��������: " << obj.num << "\n��������: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "������\n�������� ������ �������� ������. ��������: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "������\n�������� �������� �� �������� ������. ��������: " << obj.reason << endl;
	}
	cout << "\n\n";
	//�������� ����� ��������� ��������
	try
	{
		List <int, cake> First;
		First.add(6);
		First.del();
	}
	catch (bad_alloc)
	{
		cerr << "�� ������� �������� ������ ��� �������, ������." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "������\n��������� ������������ ������. ��������: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "������\n���������� �������� � ���������� ������� ������. ��������: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "������\n��� �������� ���� ��������� ��������: " << obj.num << "\n��������: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "������\n�������� ������ �������� ������. ��������: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "������\n�������� �������� �� �������� ������. ��������: " << obj.reason << endl;
	}
	cout << "\n\n";
	//�������� ����� ������ ������
	try
	{
		cake Cake("", 20, 30);
		List <int, cake> First;
		First.add(6);
		First.setDessert(Cake);
	}
	catch (bad_alloc)
	{
		cerr << "�� ������� �������� ������ ��� �������, ������." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "������\n��������� ������������ ������. ��������: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "������\n���������� �������� � ���������� ������� ������. ��������: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "������\n��� �������� ���� ��������� ��������: " << obj.num << "\n��������: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "������\n�������� ������ �������� ������.\n��������: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "������\n�������� �������� �� �������� ������. ��������: " << obj.reason << endl;
	}
	cout << "\n\n";
	//�������� �� �����
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
		cerr << "�� ������� �������� ������ ��� �������, ������." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "������\n��������� ������������ ������. ��������: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "������\n���������� �������� � ���������� ������� ������. ��������: " << obj.reason << endl;
	}
	catch (Overestimation obj)
	{
		cerr << "������\n��� �������� ���� ��������� ��������: " << obj.num << "\n��������: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "������\n�������� ������ �������� ������.\n��������: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "������\n�������� �������� �� �������� ������. ��������: " << obj.reason << endl;
	}
	cout << "\n\n";
	//������ new_term()
	try
	{
		List <int, cake> First;
		First.add(6);
		First.del();
	}
	catch (bad_alloc)
	{
		cerr << "�� ������� �������� ������ ��� �������, ������." << endl;
	}
	catch (Overflow obj)
	{
		cerr << "������\n��������� ������������ ������. ��������: " << obj.reason << endl;
	}
	catch (Empty obj)
	{
		cerr << "������\n���������� �������� � ���������� ������� ������. ��������: " << obj.reason << endl;
	}
	catch (EmptyStr obj)
	{
		cerr << "������\n�������� ������ �������� ������. ��������: " << obj.reason << endl;
	}
	catch (NoInt obj)
	{
		cerr << "������\n�������� �������� �� �������� ������. ��������: " << obj.reason << endl;
	}
    return 0;
}

