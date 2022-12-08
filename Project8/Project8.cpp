#include <iostream>
#include <string>
#include "WeatherStation.h"
using namespace std;

int main() {
    string stationName;
    int historySize;
    cout << "Enter the name of the Weather Station: ";
    getline(cin, stationName);
    cout << "Enter the history size: ";
    cin >> historySize;
    WeatherStation station(stationName, historySize);
    station.menu();

    return 0;
}