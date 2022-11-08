#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

const int COLS = 3;

void printMatrix(int matrix[][COLS], const int ROWS) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    const int ROWS = 2;
    int matrix[ROWS][COLS] = {0};
    cout << matrix[0][1] << endl;
    cout << matrix << endl;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            cout << "Input an integer at row " << row << "; col " << col << ": ";
            cin >> matrix[row][col];
        }
    }
    printMatrix(matrix, ROWS);

    // Get sum of first column
    int sum = 0;
    for (int row = 0; row < ROWS; row++) {
        sum += matrix[row][0];
    }
    cout << "Sum of first column: " << sum << endl;

    // Get the sum of each column
    for (int col = 0; col < COLS; col++) {
        sum = 0;
        for (int row = 0; row < ROWS; row++) {
            sum += matrix[row][col];
        }
        cout << "Sum of column " << col << ": " << sum << endl;
    }

    return 0;
}