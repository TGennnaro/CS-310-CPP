#include <iostream>
using namespace std;

void initializeArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter an integer: ";
        cin >> array[i];
    }
}

double smallestValueOfArray(int array[], int size) {
    double smallestValue = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallestValue)
            smallestValue = array[i];
    }
    return smallestValue;
}

double averageOfArray(int array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int lowerElementsOfArray(int array[], int size, double threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < threshold)
            count++;
    }
    return count;
}

int upperElementsOfArray(int array[], int size, double threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > threshold)
            count++;
    }
    return count;
}

int main() {
    const int SIZE = 4;
    int inputs[SIZE];
    initializeArray(inputs, SIZE);
    int smallest = smallestValueOfArray(inputs, SIZE);
    double average = averageOfArray(inputs, SIZE);
    cout << "The smallest value of the array is " << smallest << endl;
    cout << "The average of the array is " << average << endl;
    cout << "There are " << lowerElementsOfArray(inputs, SIZE, average) << " elements lower than the average" << endl;
    cout << "There are " << upperElementsOfArray(inputs, SIZE, average) << " elements higher than the average" << endl;
    return 0;
}