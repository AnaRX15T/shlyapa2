#include "JsonService.h"
#include <Windows.h>
#include <iostream>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.printWeather();
}
