#include <iostream>
#include "WeatherStation.h"

WeatherStation::WeatherStation(string name, int size) {
    this->name = name;
    this->size = size;
    this->history = new WeatherReading[size];
    this->counter = 0;
    this->running = true;
}
WeatherStation::~WeatherStation() {
    delete[] this->history;
}

void WeatherStation::input() {
    // Get temperature
    double temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;
    // Verify temperature
    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Try again: ";
        cin >> temperature;
    }

    // Get wind speed
    int wind_speed;
    cout << "Enter the wind speed: ";
    cin >> wind_speed;
    // Verify wind speed
    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Try again: ";
        cin >> wind_speed;
    }

    // Get wind direction
    string wind_direction;
    cout << "Enter the wind direction: ";
    cin.ignore(1000, '\n');
    getline(cin, wind_direction);

    WeatherReading reading(temperature, wind_speed, wind_direction);
    
    if (this->counter >= this->size) {
        for (int i = 0; i < this->size - 1; i++) {
            this->history[i] = this->history[i + 1];
        }
        this->history[this->size - 1] = reading;
    } else {
        this->history[this->counter] = reading;
        this->counter++;
    }
    cout << endl;
}

void WeatherStation::printHistory() {
    if (this->counter == 0) {
        cout << "No data to print." << endl;
        return;
    }
    cout << "The " << this->name << " Weather Station" << endl;
    for (int i = this->counter - 1; i >= 0; i--) {
        this->history[i].print();
    }
    cout << endl;
}

void WeatherStation::printRecent() {
    if (this->counter == 0) {
        cout << "No data to print." << endl;
        return;
    }
    cout << "The " << this->name << " Weather Station" << endl;
    this->history[this->counter - 1].print();
    cout << endl;
}

void WeatherStation::stop() {
    this->running = false;
}

void WeatherStation::menu() {
    while(this->running) {
        int option;
        cout << "1. Input a reading" << endl;
        cout << "2. Print the most recent reading" << endl;
        cout << "3. Print the reading history" << endl;
        cout << "4. Stop" << endl;
        cout << "Select your option: ";
        cin >> option;
        if (option == 1) {
            this->input();
        } else if (option == 2) {
            this->printRecent();
        } else if (option == 3) {
            this->printHistory();
        } else if (option == 4) {
            this->stop();
        } else {
            cout << "Invalid input. Try again." << endl;
        }
    }
}