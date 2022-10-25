/*
    Tyler Gennaro
    s1305961
    Midterm Programming Question
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int ASSIGNMENTS = 4;

void getWeights(double weights[]) {
    for (int i = 0; i < ASSIGNMENTS; i++) {
        cout << "Please input a weight for Assignment " << (i + 1) << ": ";
        cin >> weights[i];
    }
}

double sumOfArray(double values[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    return sum;
}

void printArray(double values[], int size) {
    for (int i = 0; i < size; i++) {
        cout << values[i] << " ";
    }
}

void getGrades(double grades[][ASSIGNMENTS], int students) {
    for (int student = 0; student < students; student++) {
        for (int assignment = 0; assignment < ASSIGNMENTS; assignment++) {
            cout << "Please enter a grade for Student " << (student + 1) << "'s Assignment " << (assignment + 1) << ": ";
            cin >> grades[student][assignment];
        }
        cout << endl;
    }
}

void calculateWeightedGrades(double weights[], double grades[][ASSIGNMENTS], double results[], int students) {
    for (int student = 0; student < students; student++) {
        double weightedGrade = 0;
        for (int assignment = 0; assignment < ASSIGNMENTS; assignment++) {
            weightedGrade += weights[assignment] * grades[student][assignment];
        }
        results[student] = weightedGrade;
    }
}

int main() {
    double weights[ASSIGNMENTS];
    getWeights(weights);

    double weightSum = sumOfArray(weights, ASSIGNMENTS);
    while (weightSum != 1) {
        cout << "The sum of weights must be 1. Input weights again." << endl << endl;
        getWeights(weights);
        weightSum = sumOfArray(weights, ASSIGNMENTS);
    }

    cout << "\nWeights for assignments are: ";
    printArray(weights, ASSIGNMENTS);
    cout << endl;

    const int STUDENTS = 3;
    double grades[STUDENTS][ASSIGNMENTS];
    getGrades(grades, STUDENTS);

    double results[STUDENTS];
    calculateWeightedGrades(weights, grades, results, STUDENTS);

    cout << "Weighted final grades: ";
    printArray(results, STUDENTS);
    cout << endl;

    cout << "The average of weighted final grades: " << fixed << setprecision(2) << (sumOfArray(results, STUDENTS) / STUDENTS) << endl;

    return 0;
}