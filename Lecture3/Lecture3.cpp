#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // int age;
    // cout << "How old are you? ";
    // cin >> age;
    // while (cin.fail()) {
    //     cin.clear();
    //     cin.ignore(1000, '\n');
    //     cout << "Invalid input. Try again: ";
    //     cin >> age;
    // }
    // cout << "You are " << age << " years old." << endl;

    // cout << "How old are you? ";
    // int age;
    // cin >> age;
    // bool unsuccessful = cin.fail();
    // cout << boolalpha;
    // cout << "Is reading successful? " << !unsuccessful << endl;
    // while (cin.fail()) {
    //     cout << "The input is wrong\n";
    //     cout << "Input another int value: ";
    //     cin.clear();
    //     cin.ignore(1000, '\n');
    //     cin >> age;
    // }
    // cout << "You are " << age << " years old" << endl;

    // string name;
    // cout << "What is your name? ";
    // // cin >> name;
    // cin.ignore(1000, '\n');
    // getline(cin, name);
    // cout << "Your name is " << name << endl;

    // double fvalue = 2.6789;
    // cout << fvalue << endl;
    // int ivalue = static_cast<int>(fvalue+1);
    // cout << "The int part is: " << ivalue << endl;
    // cout << "The floating value is: " << fvalue << endl;
    // cout << fixed << setprecision(3);
    // cout << "The formatted output: " << fvalue << endl;
    // cout << "Shown with 3 digits after decimal point: " << 3.1415 << endl;
    // cout << "Show the value with 10 spaces: " << setw(10) << fvalue << endl;
    // cout << "No space!" << endl;
    // cout << left;
    // cout << "Show the value with 10 spaces: " << setw(10) << fvalue << "flag" << endl;
    // cout << right;

    // cout << exp(0) << endl;
    // cout << fixed << setprecision(2) << sqrt(4) << endl;

    const double pi = 3.14159265358979323846;
    double radianof30 = 30*pi/180;
    double tanof30 = tan(radianof30);
    cout << "The radian of 30 degrees: " << fixed << setprecision(2) << radianof30;
    cout << setw(10) << tanof30 << endl;
}