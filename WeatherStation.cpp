/*
    Name: Tyler Gennaro
    This application stores current weather information
    and prints it to the console in a formatted manner.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string weather_station = "Monmouth";
    double temperature = 72.0;
    int wind_speed = 30;
    string wind_direction = "North";

    cout << weather_station << " Weather Station" << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Wind Speed: " << wind_speed;
    cout << "\tDirection: " << wind_direction << endl;
}