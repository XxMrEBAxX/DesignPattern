#pragma once
#include <iostream>
#include "QuackBehavior.h"
#include "FlyBehavior.h"

using namespace std;
class Duck
{
	QuackBehavior* quackBehavior;
	FlyBehavior* flyBehavior;
public:
	Duck()
	{
		quackBehavior = nullptr;
		flyBehavior = nullptr;
	}
	void swim()
	{
		cout << "수영한다!" << endl;
	}
	virtual void display() = 0;
	void performFly()
	{
		flyBehavior->fly();
	}
	void performQuack()
	{
		quackBehavior->quack();
	}
	void setFlyBehavior(FlyBehavior* f)
	{
		flyBehavior = f;
	}
	void setQuackBehavior(QuackBehavior* q)
	{
		quackBehavior = q;
	}
};