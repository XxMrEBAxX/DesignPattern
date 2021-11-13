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
		cout << "³¯°í ½ÍÁö¸¸ ¶¥À» ±â¾î´Ù³æ´Ù..." << endl;
	}
};

interface FlyWithWings : public FlyBehavior
{
	void fly() override
	{
		cout << "Çªµåµæ!" << endl;
	}
};