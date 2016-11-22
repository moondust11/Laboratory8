#pragma once
#include <string>
#include <iostream>

using namespace std;

//Превышение значения
class Overestimation
{
public:
	string reason;
	int num;
	Overestimation(string rsn, int n) : num(n), reason(rsn)
	{}
};
//Список пуст
class Empty
{
public:
	string reason;
	Empty(string rsn) : reason(rsn)
	{}
};
//Список переполнен
class Overflow
{
public:
	string reason;
	Overflow(string rsn) : reason(rsn)
	{}
};
//Пустая строка
class EmptyStr
{
public:
	string reason;
	EmptyStr(string rsn) : reason(rsn)
	{}
};
//Проверяет на число
class NoInt
{
public:
	string reason;
	NoInt(string rsn) : reason(rsn)
	{}
};