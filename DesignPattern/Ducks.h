#pragma once
#include"Duck.h"

class MalardDuck : public Duck
{
public:
	void display() override
	{
		cout << "�� û�� �����Դϴ�." << endl;
	}
};

class RedheadDuck : public Duck
{
public:
	void display() override
	{
		cout << "�� �Ƹ޸�ī�������Դϴ�." << endl;
	}
};

class RebberDuck : public Duck
{
public:
	void display() override
	{
		cout << "�� �� �����Դϴ�." << endl;
	}
};

class DecoyDuck : public Duck
{
public:
	void display() override
	{
		cout << "�� �̳� �����Դϴ�." << endl;
	}
};