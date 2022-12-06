#include <iostream>
#include <iomanip>
#include "WeatherReading.h";

WeatherReading::WeatherReading() {
    this->temperature = 0;
    this->wind_speed = 0;
    this->wind_direction = "";
}

WeatherReading::WeatherReading(double temp, int speed, string direction) {
    this->temperature = temp;
    this->wind_speed = speed;
    this->wind_direction = direction;
}

void WeatherReading::setTemperature(double temp) {
    this->temperature = temp;
}

void WeatherReading::setWindSpeed(int speed) {
    this->wind_speed = speed;
}

void WeatherReading::setWindDirection(string direction) {
    this->wind_direction = direction;
}

double WeatherReading::getTemperature() {
    return this->temperature;
}

int WeatherReading::getWindSpeed() {
    return this->wind_speed;
}

string WeatherReading::getWindDirection() {
    return this->wind_direction;
}

void WeatherReading::print() {
    cout << "Temperature: " << showpoint << fixed << setprecision(1)
    << this->temperature << " °C" << endl;
    cout << "Wind Speed: " << this->wind_speed << " mph";
    cout << "\tDirection: " << (this->wind_direction == "" ?
    "N/A" : this->wind_direction) << endl;
}