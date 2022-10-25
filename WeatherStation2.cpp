/*
    Name: Tyler Gennaro
    This application has the user input current weather information, then
    verifies it and prints it to the console in a formatted manner.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string weather_station;
    double temperature;
    int wind_speed;
    string wind_direction;

    // Get weather station name
    cout << "Enter the name of the weather station: ";
    cin >> weather_station;

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
    cin >> wind_direction;
    cin.ignore(1000, '\n');
    getline(cin, wind_direction);

    cout << "The " << weather_station << " Weather Station" << endl;
    cout << "Temperature: " << showpoint << fixed << setprecision(1) << temperature << endl;
    cout << "Wind Speed: " << wind_speed;
    cout << "\tDirection: " << wind_direction << endl;
}