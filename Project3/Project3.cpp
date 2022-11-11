#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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
        // Get the desired option from user.
        cout << endl << "Enter one of the following options (Case sensitive):\nInput, Print, Exit: ";
        string input;
        cin >> input;

        if (input == "Input") {
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

            // Mark that the data has been initialized.
            initialized = true;
        } else if (input == "Print") {
            // Check if the data has been initialized
            if (!initialized) {
                // If not, print an error message and ask for input again.
                cout << "No data to print." << endl;
                continue;
            }

            // Print the formatted data.
            cout << "The " << weather_station << " Weather Station" << endl;
            cout << "Temperature: " << showpoint << fixed << setprecision(1) << temperature << endl;
            cout << "Wind Speed: " << wind_speed;
            cout << "\tDirection: " << wind_direction << endl;
        } else if (input == "Exit") {
            // Exit the program.
            cout << "Exiting program" << endl;
            break;
        } else {
            // Input is invalid. Ask for input again.
            cout << "Invalid input. Try again." << endl;
        }
    }
}