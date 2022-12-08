// #include <iostream>
// #include <string>
// #include "WeatherReading.h"
// using namespace std;

// int input() {
//     // Get temperature
//     double temperature;
//     cout << "Input a temperature value: ";
//     cin >> temperature;
//     while (cin.fail()) {
//         cin.clear();
//         cin.ignore(1000, '\n');
//         cout << "Input not valid. Try again: ";
//         cin >> temperature;
//     }

//     // Get wind_speed
//     int wind_speed;
//     cout << "Input a wind speed: ";
//     cin >> wind_speed;
//     while (cin.fail()) {
//         cin.clear();
//         cin.ignore(1000, '\n');
//         cout << "Input not valid. Try again: ";
//         cin >> wind_speed;
//     }

//     // Get wind_direction
//     string wind_direction;
//     cout << "Input a wind direction: ";
//     getline(cin, wind_direction);

//     // Add variables to the class
//     WeatherReading reading(temperature, wind_speed, wind_direction);

//     return 0;
// }