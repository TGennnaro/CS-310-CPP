#include <iostream>
#include "WeatherStation.h"

WeatherStation::WeatherStation(string name, int size) {
    this->name = name;
    this->size = size;
    this->history = new WeatherReading[size];
    this->counter = 0;
    this->running = true;
}

void WeatherStation::input() {
    // // Get temperature
    // double temperature;
    // cout << "Enter the temperature: ";
    // cin >> temperature;
    // // Verify temperature
    // while (cin.fail()) {
    //     cin.clear();
    //     cin.ignore(1000, '\n');
    //     cout << "Invalid input. Try again: ";
    //     cin >> temperature;
    // }

    // // Get wind speed
    // int wind_speed;
    // cout << "Enter the wind speed: ";
    // cin >> wind_speed;
    // // Verify wind speed
    // while (cin.fail()) {
    //     cin.clear();
    //     cin.ignore(1000, '\n');
    //     cout << "Invalid input. Try again: ";
    //     cin >> wind_speed;
    // }

    // // Get wind direction
    // string wind_direction;
    // cout << "Enter the wind direction: ";
    // cin.ignore(1000, '\n');
    // getline(cin, wind_direction);

    // Reading reading;
    // reading.temperature = temperature;
    // reading.wind_speed = wind_speed;
    // reading.wind_direction = wind_direction;
    
    // if (inputCounter >= totalReadings) {
    //     pushToArray(readings, reading, totalReadings);
    // } else {
    //     readings[inputCounter] = reading;
    //     inputCounter++;
    // }
}

void WeatherStation::printHistory() {
    cout << "The " << this->name << " Weather Station" << endl;
    for (int i = 0; i < this->size; i++) {
        this->history[i].print();
    }
}

void WeatherStation::printRecent() {
    cout << "The " << this->name << " Weather Station" << endl;
    this->history[this->size - 1].print();
}

void WeatherStation::stop() {
    this->running = false;
}

void WeatherStation::menu() {
    
}