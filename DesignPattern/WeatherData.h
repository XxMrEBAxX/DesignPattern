#pragma once
#include "Subject.h"
#include <vector>
using namespace std;
// 요거 추가 안하면 뭔지 모를 오류 뜸

class WeatherData : public Subject
{
	vector<Observer*> observers;
	float Temperature = 0.0f;
	float Humidity = 0.0f;
	float Pressure = 0.0f;
public:
	WeatherData() {}
	~WeatherData()
	{
		observers.empty();
	}
	void registerObserver(Observer* ob)
	{
		observers.push_back(ob);
	}
	void removeObserver(Observer* ob)
	{
		vector<Observer*>::iterator iter;
		for (iter = observers.begin(); iter != observers.end(); iter++)
		{
			if (*iter == ob)
			{
				break;
			}
		}
		observers.erase(iter);
	}
	void notifyObserver()
	{
		for (vector<Observer*>::iterator iter = observers.begin(); iter != observers.end(); iter++)
		{
			Observer* ob = *iter;
			ob->updata(this);
		}
	}
	float getTemperature()
	{
		return Temperature;
	}
	float getHumidity()
	{
		return Humidity;
	}
	float getPressure()
	{
		return Pressure;
	}
	void measurementsChanged()
	{
		notifyObserver();
	}
	void setMeasurements(float t, float h, float p)
	{
		Temperature = t;
		Humidity = h;
		Pressure = p;
		measurementsChanged();
	}
};