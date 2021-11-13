#pragma once
#include <combaseapi.h>

class WeatherData;

interface Observer
{
public:
	virtual void updata(WeatherData* wd) = 0;
};