#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUMBEROFPRIMES = 50;
    const int NUMBERSPERLINE = 10;
    int testInt = 2;
    int counter = 0;

    while (counter < NUMBEROFPRIMES) {
        bool isPrime = true;
        for (int divisor = 2; divisor < testInt; divisor++) {
            if (testInt % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            counter++;
            if (counter % NUMBERSPERLINE == 0)
                cout << setw(5) << testInt << endl;
            else
                cout << setw(5) << testInt << " ";
        }

        testInt++;
    }
}