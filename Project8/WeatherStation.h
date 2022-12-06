#pragma once
#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H
#include <string>
#include "WeatherReading.h"
using namespace std;

class WeatherStation {
    private:
        string name;
        int size;
        WeatherReading* history;
        int counter;
        bool running;
    public:
        WeatherStation(string name, int size);
        ~WeatherStation();
        void input();
        void printHistory();
        void printRecent();
        void stop();
        void menu();
};

#endif