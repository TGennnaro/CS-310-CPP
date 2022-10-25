#include <iostream>
#include <iomanip>
using namespace std;

const int COLUMN_SIZE = 3;

void initialMatrix(int myMatrix[][COLUMN_SIZE], int rowSize) {
    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < COLUMN_SIZE; col++) {
            cout << "Input an integer: ";
            cin >> myMatrix[row][col];
        }
    }
}

void sumColumn(const int myMatrix[][COLUMN_SIZE], int rowSize, int sumOfColumns[]) {
    for (int col = 0; col < COLUMN_SIZE; col++) {
        int sum = 0;
        for (int row = 0; row < rowSize; row++) {
            sum += myMatrix[row][col];
        }
        sumOfColumns[col] = sum;
    }
}

int largestValue(const int myArray[], int arraySize) {
    int largest = myArray[0];
    for (int i = 1; i < arraySize; i++) {
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }
    return largest;
}

int searchValue(const int myArray[], int arraySize, int value, int indexes[]) {
    int count = 0;
    for (int i = 0; i < arraySize; i++) {
        if (myArray[i] == value) {
            indexes[count] = i;
            count++;
        }
    }
    return count;
}

void printMatrix(const int myMatrix[][COLUMN_SIZE], int rowSize) {
    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < COLUMN_SIZE; col++) {
            cout << setw(5) << myMatrix[row][col];
        }
        cout << endl;
    }
}

void printArray(const int myArray[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << setw(5) << myArray[i];
    }
}

int main() {
    const int ROWS = 2;
    int myMatrix[ROWS][COLUMN_SIZE];
    initialMatrix(myMatrix, ROWS);
    printMatrix(myMatrix, ROWS);

    cout << endl;

    int sumOfColumns[COLUMN_SIZE];
    sumColumn(myMatrix, ROWS, sumOfColumns);
    printArray(sumOfColumns, COLUMN_SIZE);

    cout << endl;

    cout << "The largest column sum is " << largestValue(sumOfColumns, COLUMN_SIZE) << endl;

    return 0;
}