#pragma once
#include <string>
class Weather
{
	std::string city;
	double lon;
	double lat;
	double temperature;
	std::string weather;
	double windSpeed;
	int clouds;
public:
	inline Weather(std::string cit, double lo, double la, double temperat, std::string weath, double wind, int cloud) { city = cit; lon = lo; lat = la; temperature = temperat; weather = weath; windSpeed = wind; clouds = cloud; };
};

