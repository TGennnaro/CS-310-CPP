#include <iostream>
using namespace std;

int main() {
    int userInput;
    cout << "Please input a number 100 to 999: ";
    cin >> userInput;
    int digit1 = userInput / 100;
    int digit2 = (userInput % 100) / 10;
    int digit3 = userInput % 10;
    cout << "Each digit: " << digit1 << " " << digit2 << " " << digit3 << endl;
    cout << "The sum of the digits is" << ((digit1 + digit2 + digit3) % 3 == 0 ? " " : " not ") << "divisible by 3" << endl;
}