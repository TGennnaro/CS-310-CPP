#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Reading {
    double temperature;
    int wind_speed;
    string wind_direction;
};

void pushToArray(Reading array[], Reading value, int size) {
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    array[size - 1] = value;
}

void input(Reading readings[], int totalReadings, int& inputCounter) {
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

    Reading reading;
    reading.temperature = temperature;
    reading.wind_speed = wind_speed;
    reading.wind_direction = wind_direction;
    
    if (inputCounter >= totalReadings) {
        pushToArray(readings, reading, totalReadings);
    } else {
        readings[inputCounter] = reading;
        inputCounter++;
    }
}

void print(string weather_station, Reading readings[], int totalReadings, int inputCounter) {
    // Check if the data has been initialized
    if (inputCounter <= 0) {
        // If not, print an error message and ask for input again.
        cout << "No data to print." << endl;
        return;
    }

    cout << "Print all data or most recent? (All/Recent): ";
    string userInput;
    cin >> userInput;
    while (userInput != "All" && userInput != "Recent") {
        cout << "Invalid input. Try again: ";
        cin >> userInput;
    }
    if (userInput == "All") {
        const int COLUMN_WIDTH = 22;
        cout << endl;
        cout << "The " << weather_station << " Weather Station" << endl;
        cout << setw(COLUMN_WIDTH) << left << fixed << setprecision(1) << "Temperature (°C)";
        cout << setw(COLUMN_WIDTH) << "Wind Speed (mph)";
        cout << setw(COLUMN_WIDTH) << "Wind Direction" << endl;
        for (int i = inputCounter - 1; i >= 0; i--) {
            cout << setw(COLUMN_WIDTH) << readings[i].temperature;
            cout << setw(COLUMN_WIDTH) << readings[i].wind_speed;
            cout << setw(COLUMN_WIDTH) << (readings[i].wind_direction == "" ? "N/A" : readings[i].wind_direction) << endl;
        }
    } else {
        cout << endl;
        // Print the formatted data.
        cout << "The " << weather_station << " Weather Station" << endl;
        cout << "Temperature: " << showpoint << fixed << setprecision(1) << readings[inputCounter - 1].temperature << " °C" << endl;
        cout << "Wind Speed: " << readings[inputCounter - 1].wind_speed << " mph";
        cout << "\tDirection: " << (readings[inputCounter - 1].wind_direction == "" ? "N/A" : readings[inputCounter - 1].wind_direction) << endl;
    }
}

bool isGoodChoice(string input) {
    if (input == "Input" || input == "Print" || input == "Exit") {
        return true;
    } else {
        return false;
    }
}

void showMenu(string weather_station, Reading readings[], int totalReadings, int& inputCounter) {
    cout << endl << "Enter one of the following options (Case sensitive):\nInput, Print, Exit: ";
    string userInput;
    cin >> userInput;

    if (isGoodChoice(userInput)) {
        if (userInput == "Input") {
            input(readings, totalReadings, inputCounter);
        } else if (userInput == "Print")
            print(weather_station, readings, totalReadings, inputCounter);
        else if (userInput == "Exit") {
            cout << "Goodbye!" << endl;
            exit(0);
        }
    } else {
        cout << "Invalid input. Try again." << endl;
    }
}

int main() {
    // Get the name of the weather station.
    string weather_station;
    cout << "Please enter the name of the Weather Station: ";
    getline(cin, weather_station);

    // Get the number of readings to save.
    int totalReadings;
    cout << "How many weather readings would you like to save?: ";
    cin >> totalReadings;
    cin.ignore(1000, '\n');

    // Define the variables
    Reading* readings = new Reading[totalReadings];
    int inputCounter = 0;
    
    while (true) {
        showMenu(weather_station, readings, totalReadings, inputCounter);
    }

    delete[] readings;
    readings = NULL;

    return 0;
}