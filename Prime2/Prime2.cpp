#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int value) {
    for (int divisor = 2; divisor < value; divisor++) {
        if (value % divisor == 0) {
            return false;
        }
    }
    return true;
}

void displayPrimeNumbers(int n, int m = 10) {
    int counter = 0;
    int testInt = 2;
    while (counter < n) {
        if (isPrime(testInt)) {
            counter++;
            if (counter % m == 0)
                cout << setw(5) << testInt << endl;
            else
                cout << setw(5) << testInt << " ";
        }
        testInt++;
    }
}

int main() {
    displayPrimeNumbers(100, 20);
    cout << endl;
    displayPrimeNumbers(40);
    return 0;
}