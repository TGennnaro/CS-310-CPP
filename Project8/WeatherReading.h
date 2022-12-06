#pragma once
#ifndef WEATHERREADING_H
#define WEATHERREADING_H
#include <string>
using namespace std;

class WeatherReading {
    private:
        double temperature;
        int wind_speed;
        string wind_direction;
    public:
        WeatherReading();
        WeatherReading(double temp, int speed, string direction);
        void setTemperature(double temp);
        void setWindSpeed(int speed);
        void setWindDirection(string direction);
        double getTemperature();
        int getWindSpeed();
        string getWindDirection();
        void print();
};

#endif