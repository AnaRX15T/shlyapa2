#pragma once
#include <string>
class Service
{
	virtual Service getWeather(std::string s) = 0;
	virtual ~Service();
};

