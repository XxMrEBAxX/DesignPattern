#pragma once
#include"Duck.h"

class MalardDuck : public Duck
{
public:
	void display() override
	{
		cout << "전 청둥 오리입니다." << endl;
	}
};

class RedheadDuck : public Duck
{
public:
	void display() override
	{
		cout << "전 아메리카흰죽지입니다." << endl;
	}
};

class RebberDuck : public Duck
{
public:
	void display() override
	{
		cout << "전 고무 오리입니다." << endl;
	}
};

class DecoyDuck : public Duck
{
public:
	void display() override
	{
		cout << "전 미끼 오리입니다." << endl;
	}
};