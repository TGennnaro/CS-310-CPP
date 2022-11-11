#include <iostream>
using namespace std;

void print(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void initialize(int *array, int size, int initValue) {
    for (int i = 0; i < size; i++) {
        array[i] = initValue;
    }
}

int* addElement(int *array, int &size, int value) {
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    newArray[size] = value;
    size++;
    delete[]array;
    return newArray;
}

int* deleteFirstElement(int *array, int &size) {
    int *newArray = new int[size - 1];
    for (int i = 1; i < size; i++) {
        newArray[i - 1] = array[i];
    }
    size--;
    delete []array;
    return newArray;
}

int* deleteElement(int *array, int &size, int index) {
    if (index > size - 1 || index < 0) {
        cout << "Index out of bounds!" << endl;
        return array;
    }
    int *newArray = new int[size - 1];
    for (int i = 0, j = 0; i < size; i++) {
        if (i != index) {
            newArray[j] = array[i];
            j++;
        }
    }
    size--;
    delete []array;
    return newArray;
}

int main() {
    cout << "Enter list size: ";
    int n;
    cin >> n;
    int *A = new int[n];
    initialize(A, n, 0);
    print(A, n);
    A = addElement(A, n, 5);
    print(A, n);
    A = deleteFirstElement(A, n);
    print(A, n);
    A = deleteElement(A, n, 1);
    print(A, n);
    delete []A;
    A = NULL;

    return 0;
}