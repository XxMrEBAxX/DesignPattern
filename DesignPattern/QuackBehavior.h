#pragma once
#include <combaseapi.h>
#include <iostream>
using namespace std;

interface QuackBehavior
{
	virtual void quack() = 0;
};

interface Quack : public QuackBehavior
{
	void quack() override
	{
		cout << "�O!" << endl;
	}
};

interface Squack : public QuackBehavior
{
	void quack() override
	{
		cout << "���O!" << endl;
	}
};

interface MuteQuack : public QuackBehavior
{
	void quack() override
	{
		cout << "(�O!)... �鸮�� �ʴ� �޾Ƹ���." << endl;
	}
};