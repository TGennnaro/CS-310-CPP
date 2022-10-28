#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1;
    int* pInt;

    cout << pInt << endl;
    cout << "Memory address of a: " << &a << endl;

    pInt = &a;
    cout << pInt << endl;
    cout << "Value of a: " << *pInt << endl;

    double b = a;
    double* pDouble = &b;

    int integers[3] = {1, 3, 5};
    cout << "First element's memory address: " << integers << endl;
    pInt = integers;
    cout << "New pInt value: " << pInt << endl;
    cout << "First element value: " << integers[0] << endl;
    cout << "First element value: " << *pInt << endl;
    cout << "Second element value: " << *(pInt + 1) << endl;

    pInt++;
    cout << "New pInt value: " << *pInt << endl;
    cout << "Are the pointers equal? " << (pInt == integers) << endl;
    pInt--;
    cout << "Are the pointers equal? " << (pInt == integers) << endl;

    int x = 5, y = 6;
    // int* pX = &x, * pY = &y;
    // cout << "Value of pX: " << pX << endl;
    // cout << "Value of pY: " << pY << endl;
    // cout << "Value pointed by pX: " << *pX << endl;
    // cout << "Value pointed by pY: " << *pY << endl;

    // *pX = *pY;

    // cout << "Value of pX: " << pX << endl;
    // cout << "Value of pY: " << pY << endl;
    // cout << "Value pointed by pX: " << *pX << endl;
    // cout << "Value pointed by pY: " << *pY << endl;

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    swap(&x, &y);
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}