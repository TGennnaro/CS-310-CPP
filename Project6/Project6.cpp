#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Need 3 functions for the 3 different data types: double, string, int.
void pushToArray(double array[], double value, int size) {
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    array[size - 1] = value;
}
void pushToArray(string array[], string value, int size) {
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    array[size - 1] = value;
}
void pushToArray(int array[], int value, int size) {
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    array[size - 1] = value;
}

void input(double temperatures[], int wind_speeds[], string wind_directions[], int totalReadings, int& inputCounter) {
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
    
    if (inputCounter >= totalReadings) {
        pushToArray(temperatures, temperature, totalReadings);
        pushToArray(wind_speeds, wind_speed, totalReadings);
        pushToArray(wind_directions, wind_direction, totalReadings);
    } else {
        temperatures[inputCounter] = temperature;
        wind_speeds[inputCounter] = wind_speed;
        wind_directions[inputCounter] = wind_direction;
        inputCounter++;
    }
}

void print(string weather_station, double temperatures[], int wind_speeds[], string wind_directions[], int totalReadings, int inputCounter) {
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
            cout << setw(COLUMN_WIDTH) << temperatures[i];
            cout << setw(COLUMN_WIDTH) << wind_speeds[i];
            cout << setw(COLUMN_WIDTH) << (wind_directions[i] == "" ? "N/A" : wind_directions[i]) << endl;
        }
    } else {
        cout << endl;
        // Print the formatted data.
        cout << "The " << weather_station << " Weather Station" << endl;
        cout << "Temperature: " << showpoint << fixed << setprecision(1) << temperatures[inputCounter - 1] << " °C" << endl;
        cout << "Wind Speed: " << wind_speeds[inputCounter - 1] << " mph";
        cout << "\tDirection: " << (wind_directions[inputCounter - 1] == "" ? "N/A" : wind_directions[inputCounter - 1]) << endl;
    }
}

bool isGoodChoice(string input) {
    if (input == "Input" || input == "Print" || input == "Exit") {
        return true;
    } else {
        return false;
    }
}

void showMenu(string weather_station, double temperatures[], int wind_speeds[], string wind_directions[], int totalReadings, int& inputCounter) {
    cout << endl << "Enter one of the following options (Case sensitive):\nInput, Print, Exit: ";
    string userInput;
    cin >> userInput;

    if (isGoodChoice(userInput)) {
        if (userInput == "Input") {
            input(temperatures, wind_speeds, wind_directions, totalReadings, inputCounter);
        } else if (userInput == "Print")
            print(weather_station, temperatures, wind_speeds, wind_directions, totalReadings, inputCounter);
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
    double* temperatures = new double[totalReadings];
    int* wind_speeds = new int[totalReadings];
    string* wind_directions = new string[totalReadings];
    int inputCounter = 0;
    
    while (true) {
        showMenu(weather_station, temperatures, wind_speeds, wind_directions, totalReadings, inputCounter);
    }

    delete[] temperatures;
    delete[] wind_speeds;
    delete[] wind_directions;
    temperatures = NULL;
    wind_speeds = NULL;
    wind_directions = NULL;

    return 0;
}