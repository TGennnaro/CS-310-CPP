#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void input(double &temperature, int &wind_speed, string &wind_direction) {
    // Get temperature
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
    cout << "Enter the wind direction: ";
    cin.ignore(1000, '\n');
    getline(cin, wind_direction);
}

void print(string weather_station, double temperature, int wind_speed, string wind_direction, bool initialized) {
    // Check if the data has been initialized
    if (!initialized) {
        // If not, print an error message and ask for input again.
        cout << "No data to print." << endl;
        return;
    }

    // Print the formatted data.
    cout << "The " << weather_station << " Weather Station" << endl;
    cout << "Temperature: " << showpoint << fixed << setprecision(1) << temperature << endl;
    cout << "Wind Speed: " << wind_speed;
    cout << "\tDirection: " << wind_direction << endl;
}

bool isGoodChoice(string input) {
    if (input == "Input" || input == "Print" || input == "Exit") {
        return true;
    } else {
        return false;
    }
}

void showMenu(string weather_station, double &temperature, int &wind_speed, string &wind_direction, bool &initialized) {
    cout << endl << "Enter one of the following options (Case sensitive):\nInput, Print, Exit: ";
    string userInput;
    cin >> userInput;

    if (isGoodChoice(userInput)) {
        if (userInput == "Input") {
            input(temperature, wind_speed, wind_direction);
            initialized = true;
        } else if (userInput == "Print")
            print(weather_station, temperature, wind_speed, wind_direction, initialized);
        else if (userInput == "Exit") {
            cout << "Goodbye!" << endl;
            exit(0);
        }
    } else {
        cout << "Invalid input. Try again." << endl;
        showMenu(weather_station, temperature, wind_speed, wind_direction, initialized);
    }
}

int main() {
    // Define the variables.
    string weather_station;
    double temperature;
    int wind_speed;
    string wind_direction;
    bool initialized = false;

    // Get the name of the weather station.
    cout << "Please enter the name of the Weather Station: ";
    getline(cin, weather_station);
    
    while (true) {
        showMenu(weather_station, temperature, wind_speed, wind_direction, initialized);
    }
}