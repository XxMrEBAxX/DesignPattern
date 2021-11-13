#pragma once
#include "WeatherData.h"
using namespace std;

interface Observer;

interface DisplayObserver : public Observer
{
	WeatherData* weatherData;
public: 
	virtual void updata(WeatherData* wd) = 0;
	virtual void display() = 0;
};

class CurrentConditionDisplay : public DisplayObserver
{
public:
	CurrentConditionDisplay(WeatherData* wd)
	{
		weatherData = wd;
		wd->registerObserver(this);
	}
	void updata(WeatherData* wd) override
	{
		weatherData = wd;
		display();
	}
	void display() override
	{
		cout << "Current conditions : " << weatherData->getTemperature() << 
			"F degress and " << weatherData->getHumidity() << "% humidity" << endl;
	}
};

class ForecastDisplay : public DisplayObserver
{
	float currentPressure = 0.0f;
	float lastPressure = 0.0f;
public:
	ForecastDisplay(WeatherData* wd)
	{
		weatherData = wd;
		currentPressure = wd->getPressure();
		wd->registerObserver(this);
	}
	void updata(WeatherData* wd) override
	{
		
		weatherData = wd;
		lastPressure = currentPressure;
		currentPressure = wd->getPressure();
		display();
	}
	void display() override
	{
		cout << "Forecast : ";
		if (currentPressure > lastPressure)
			cout << "Improving weather on the way." << endl;
		else if (currentPressure == lastPressure)
			cout << "More of the same." << endl;
		else if (currentPressure < lastPressure)
			cout << "Watch out for cooler, rainy weather." << endl;
	}
};

class StatisticDisplay : public DisplayObserver
{
	float maxTemperature = 0.0f;
	float minTemperature = 200.0f;
	float Sum = 0.0f;
	int count = 0;
public:
	StatisticDisplay(WeatherData* wd)
	{
		weatherData = wd;
		wd->registerObserver(this);
	}
	void updata(WeatherData* wd) override
	{
		weatherData = wd;
		float temp = wd->getTemperature();
		Sum += wd->getTemperature();
		count++;

		if (temp > maxTemperature)
		{
			maxTemperature = temp;
		}
		if (temp < minTemperature)
		{
			minTemperature = temp;
		}

		display();
	}
	void display() override
	{
		cout << "Avg/Max/Min temperature = " << (Sum / count) 
			<< "/" << maxTemperature << "/" << minTemperature << endl;
	}
};