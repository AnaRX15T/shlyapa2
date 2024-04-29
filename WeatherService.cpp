#include "JsonService.h"
#include <Windows.h>
#include <iostream>
#include "XmlService.h"
#include "Weather.h"
#include "Service.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    JsonService js;
    Weather w2 = js.getWeather("weather.json");
    w.printWeather();
}
