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
		cout << "꿕!" << endl;
	}
};

interface Squack : public QuackBehavior
{
	void quack() override
	{
		cout << "스꿕!" << endl;
	}
};

interface MuteQuack : public QuackBehavior
{
	void quack() override
	{
		cout << "(꿕!)... 들리지 않는 메아리다." << endl;
	}
};