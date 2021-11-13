#pragma once
#include <combaseapi.h>
#include <iostream>
using namespace std;

interface FlyBehavior
{
	virtual void fly() = 0;
};

interface FlyNoWay : public FlyBehavior
{
	void fly() override
	{
		cout << "���� ������ ���� ���ٳ��..." << endl;
	}
};

interface FlyWithWings : public FlyBehavior
{
	void fly() override
	{
		cout << "Ǫ���!" << endl;
	}
};