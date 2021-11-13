#include <iostream>
#include "DisplayObserver.h"
using namespace std;

int main()
{
	// instance
	WeatherData* weatherData = new WeatherData();
	CurrentConditionDisplay* currentConditionDisplay = new CurrentConditionDisplay(weatherData);
	ForecastDisplay* forecastDisplay = new ForecastDisplay(weatherData);
	StatisticDisplay* statisticDisplay = new StatisticDisplay(weatherData);
	//

	weatherData->setMeasurements(80, 65, 30); cout << endl;
	weatherData->setMeasurements(82, 70, 29); cout << endl;
	weatherData->setMeasurements(78, 90, 29); cout << endl;
	weatherData->setMeasurements(10, 10, 10); cout << endl;

	// delete
	delete weatherData; delete currentConditionDisplay; delete forecastDisplay; delete statisticDisplay;
	//
}