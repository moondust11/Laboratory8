#pragma once
#include <string>
#include <iostream>

using namespace std;

//���������� ��������
class Overestimation
{
public:
	string reason;
	int num;
	Overestimation(string rsn, int n) : num(n), reason(rsn)
	{}
};
//������ ����
class Empty
{
public:
	string reason;
	Empty(string rsn) : reason(rsn)
	{}
};
//������ ����������
class Overflow
{
public:
	string reason;
	Overflow(string rsn) : reason(rsn)
	{}
};
//������ ������
class EmptyStr
{
public:
	string reason;
	EmptyStr(string rsn) : reason(rsn)
	{}
};
//��������� �� �����
class NoInt
{
public:
	string reason;
	NoInt(string rsn) : reason(rsn)
	{}
};