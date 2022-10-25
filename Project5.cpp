#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_READINGS = 5;

// Need 3 functions for the 3 different data types: double, string, int.
void pushToArray(double array[], double value, int size) {
    for (int i = size-1; i > 0; i--) {
        array[i] = array[i-1];
    }
    array[0] = value;
}
void pushToArray(string array[], string value, int size) {
    for (int i = size-1; i > 0; i--) {
        array[i] = array[i-1];
    }
    array[0] = value;
}
void pushToArray(int array[], int value, int size) {
    for (int i = size-1; i > 0; i--) {
        array[i] = array[i-1];
    }
    array[0] = value;
}

void input(double temperatures[], int wind_speeds[], string wind_directions[]) {
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
    pushToArray(temperatures, temperature, MAX_READINGS);

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
    pushToArray(wind_speeds, wind_speed, MAX_READINGS);

    // Get wind direction
    string wind_direction;
    cout << "Enter the wind direction: ";
    cin.ignore(1000, '\n');
    getline(cin, wind_direction);
    // Verify wind direction
    while(wind_direction == "") {
        cout << "Invalid input. Try again: ";
        getline(cin, wind_direction);
    }
    pushToArray(wind_directions, wind_direction, MAX_READINGS);
}

void print(string weather_station, double temperatures[], int wind_speeds[], string wind_directions[], bool initialized) {
    // Check if the data has been initialized
    if (!initialized) {
        // If not, print an error message and ask for input again.
        cout << "No data to print." << endl;
        return;
    }

    cout << "Print all data or most recent? (All/Recent): ";
    string userInput;
    cin >> userInput;
    while (userInput != "All" && userInput != "Last") {
        cout << "Invalid input. Try again: ";
        cin >> userInput;
    }
    if (userInput == "All") {
        for (int i = 0; i < MAX_READINGS; i++) {
            if (wind_directions[i] == "") {
                continue;
            }
            // Print the formatted data.
            cout << endl;
            cout << "The " << weather_station << " Weather Station" << endl;
            cout << "Temperature: " << showpoint << fixed << setprecision(1) << temperatures[i] << endl;
            cout << "Wind Speed: " << wind_speeds[i];
            cout << "\tDirection: " << wind_directions[i] << endl;
        }
    } else {
        // Print the formatted data.
        cout << "The " << weather_station << " Weather Station" << endl;
        cout << "Temperature: " << showpoint << fixed << setprecision(1) << temperatures[0] << endl;
        cout << "Wind Speed: " << wind_speeds[0];
        cout << "\tDirection: " << wind_directions[0] << endl;
    }
}

bool isGoodChoice(string input) {
    if (input == "Input" || input == "Print" || input == "Exit") {
        return true;
    } else {
        return false;
    }
}

void showMenu(string weather_station, double temperatures[], int wind_speeds[], string wind_directions[], bool &initialized) {
    cout << endl << "Enter one of the following options (Case sensitive):\nInput, Print, Exit: ";
    string userInput;
    cin >> userInput;

    if (isGoodChoice(userInput)) {
        if (userInput == "Input") {
            input(temperatures, wind_speeds, wind_directions);
            initialized = true;
        } else if (userInput == "Print")
            print(weather_station, temperatures, wind_speeds, wind_directions, initialized);
        else if (userInput == "Exit") {
            cout << "Goodbye!" << endl;
            exit(0);
        }
    } else {
        cout << "Invalid input. Try again." << endl;
        showMenu(weather_station, temperatures, wind_speeds, wind_directions, initialized);
    }
}

int main() {
    // Define the variables.
    string weather_station;

    double temperatures[MAX_READINGS];
    int wind_speeds[MAX_READINGS];
    string wind_directions[MAX_READINGS];
    bool initialized = false;

    // Get the name of the weather station.
    cout << "Please enter the name of the Weather Station: ";
    getline(cin, weather_station);
    
    while (true) {
        showMenu(weather_station, temperatures, wind_speeds, wind_directions, initialized);
    }
}