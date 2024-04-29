#include "XmlService.h"
#include "Weather.h"
#include "Service.h"
#include <iostream>

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
}