#pragma once
#include "json.hpp"
#include "Service.h"
#include <fstream>
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


