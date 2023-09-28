#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
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
    
    if (this->counter >= this->size) { // if at max size, shift everything left
        for (int i = 0; i < this->size - 1; i++) {
            this->history[i] = this->history[i + 1];
        }
        this->history[this->size - 1] = reading;
    } else {
        this->history[this->counter] = reading;
        this->counter++;
    }

		this->saveReading(reading); // save the reading to a file
    cout << endl;
}

void WeatherStation::printSummary() {
	ifstream file;
	file.open(this->name + ".txt");
	if (file.fail()) {
		cout << "No data to print." << endl;
		return;
	}
	string line;
	getline(file, line);
	const double DEFAULT_TEMP = -999;
	const int DEFAULT_SPEED = -999;
	double temp;
	double minTemp = DEFAULT_TEMP;
	double maxTemp = DEFAULT_TEMP;
	int speed;
	int minSpeed = DEFAULT_SPEED;
	int maxSpeed = DEFAULT_SPEED;

	while (!file.eof()) {
		// cout << line << endl;
		int i;
		for (i = 0; i < line.length(); i++) {
			if (isspace(line[i]))
				break;
		}
		temp = stod(line.substr(0, i));
		int j = i + 1;
		for (; j < line.length(); j++) {
			if (isspace(line[j]))
				break;
		}
		speed = stoi(line.substr(i + 1, j));
		if (minTemp == DEFAULT_TEMP || temp < minTemp) {
			minTemp = temp;
		}
		if (maxTemp == DEFAULT_TEMP || temp > maxTemp) {
			maxTemp = temp;
		}
		if (minSpeed == DEFAULT_SPEED || speed < minSpeed) {
			minSpeed = speed;
		}
		if (maxSpeed == DEFAULT_SPEED || speed > maxSpeed) {
			maxSpeed = speed;
		}
		getline(file, line);
	}
	cout << "Minimum Temperature: " << fixed << setprecision(2) << minTemp << endl;
	cout << "Maximum Temperature: " << maxTemp << endl;
	cout << "Minimum Wind Speed: " << minSpeed << endl;
	cout << "Maximum Wind Speed: " << maxSpeed << endl;
	cout << endl;
	file.close();
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

void WeatherStation::saveReading(WeatherReading reading) {
	ofstream file;
	file.open(this->name + ".txt", ios::app);
	file << fixed << setprecision(2) << reading.getTemperature() << " " << reading.getWindSpeed() << " " << reading.getWindDirection() << endl;
	file.close();
}

void WeatherStation::menu() {
    while(this->running) {
        int option;
        cout << "1. Input a reading" << endl;
        cout << "2. Print the most recent reading" << endl;
        cout << "3. Print the reading history" << endl;
				cout << "4. Print the summary" << endl;
        cout << "5. Stop" << endl;
        cout << "Select your option: ";
        cin >> option;
        if (option == 1) {
            this->input();
        } else if (option == 2) {
            this->printRecent();
        } else if (option == 3) {
            this->printHistory();
        } else if (option == 4) {
						this->printSummary();
				} else if (option == 5) {
            this->stop();
        } else {
            cout << "Invalid input. Try again." << endl;
        }
    }
}