#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(const double* original, double* results, int size) {
    for (int i = 0, j = size - 1; i < size; i++, j--) {
        results[j] = original[i];
    }
}

double* reverseArray(const double* original, int size) {
    double* results = new double[size];
    for (int i = 0, j = size - 1; i < size; i++, j--) {
        results[j] = original[i];
    }
    return results;
}

void printArray(const double* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void getGrades(double* grades, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
    }
}

int main() {

    int* size = new int;
    cout << "What is your class size?: ";
    cin >> *size;

    double* pDouble = new double[*size];
    if (pDouble == NULL) {
        cout << "Memory allocation failed!" << endl;
        exit(1);
    }
    getGrades(pDouble, *size);
    cout << "Grades: ";
    printArray(pDouble, *size);

    double* result = reverseArray(pDouble, *size);
    cout << "Reversed: ";
    printArray(result, *size);

    delete[] result;
    result = NULL;

    delete[] pDouble;
    pDouble = NULL;

    delete size;
    size = NULL;

    // int a = 1;
    // int* pInt;

    // cout << pInt << endl;
    // cout << "Memory address of a: " << &a << endl;

    // pInt = &a;
    // cout << pInt << endl;
    // cout << "Value of a: " << *pInt << endl;

    // double b = a;
    // double* pDouble = &b;

    // int integers[3] = {1, 3, 5};
    // cout << "First element's memory address: " << integers << endl;
    // pInt = integers;
    // cout << "New pInt value: " << pInt << endl;
    // cout << "First element value: " << integers[0] << endl;
    // cout << "First element value: " << *pInt << endl;
    // cout << "Second element value: " << *(pInt + 1) << endl;

    // pInt++;
    // cout << "New pInt value: " << *pInt << endl;
    // cout << "Are the pointers equal? " << (pInt == integers) << endl;
    // pInt--;
    // cout << "Are the pointers equal? " << (pInt == integers) << endl;

    // int x = 5, y = 6;
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

    // cout << "Value of x: " << x << endl;
    // cout << "Value of y: " << y << endl;
    // swap(&x, &y);
    // cout << "Value of x: " << x << endl;
    // cout << "Value of y: " << y << endl;
    // swap(x, y);
    // cout << "Value of x: " << x << endl;
    // cout << "Value of y: " << y << endl;

    // const int SIZE = 3;
    // double grades[SIZE] = { 100, 95.3, 85.2 };

    // for (int i = 0; i < SIZE; i++) {
    //     cout << "Element memory address: " << (grades + i) << endl;
    //     cout << "Element value: " << grades[i] << endl;
    //     cout << "Element value: " << *(grades + i) << endl;
    // }

    // double* pDouble = grades;

    // for (int i = 0; i < SIZE; i++) {
    //     cout << "Element memory address: " << (pDouble + i) << endl;
    //     cout << "Element value: " << pDouble[i] << endl;
    //     cout << "Element value: " << *(pDouble + i) << endl;
    // }

    // printArray(grades, SIZE);
    // double reversal[SIZE];
    // reverseArray(grades, reversal, SIZE);
    // cout << "Reverse result: ";
    // printArray(reversal, SIZE);

    return 0;
}