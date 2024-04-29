#pragma once
#include <string>
#include <iostream>
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
	inline void printWeather() { std::cout << "City: " << city << '\n' << "Lon: " << lon << '\n' << "Lat: " << lat << '\n' << "Temperature: " << temperature << '\n' << "Weather: " << weather << '\n' << "Wind speed: " << windSpeed << '\n' << "Clouds: " << clouds << '\n'; }
};

