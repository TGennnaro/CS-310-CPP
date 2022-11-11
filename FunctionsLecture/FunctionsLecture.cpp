#include <iostream>
using namespace std;

int larger(const int x, const int y) {
    if (x > y)
        return x;
    else
        return y;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int divide(int x, int y) {
    if (y == 0) {
        cout << "Error: divide by zero" << endl;
        return 0;
    } else {
        return x / y;
    }
}

double larger(double num1, double num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main() {
    int i = 5;
    int j = 2;
    int k = larger(i, j);
    cout << "The larger value between " << i << " and " << j << " is " << k << endl;
    swap(i, j);
    cout << "The value of i is now " << i << " and the value of j is now " << j << endl;
    cout << "The value of i / j is " << divide(10, 5) << endl;

    double num1, num2;
    cout << "Input two floating point values: ";
    cin >> num1 >> num2;
    double dResult = larger(5, 6);
    cout << "The larger value between " << num1 << " and " << num2 << " is " << dResult << endl;

    return 0;
}