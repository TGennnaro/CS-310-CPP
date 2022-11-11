#include <iostream>
using namespace std;

int main() {
    // bool success = true;
    // cout << boolalpha << success << endl;
    // success = false;
    // cout << noboolalpha << success << endl;
    // success = 0;
    // cout << boolalpha << success << endl;
    // cout << (3 == 2) << endl;
    int input = 1000;
    // bool result = (input = 2);
    // cout << result << endl;
    bool bRange = (input >= 0 || input <= 100);
    cout << boolalpha << bRange << endl;
    bRange = (input < 2) && (input--);
    cout << bRange << endl;

    if (bRange) {
        cout << "The boolean value is: " << bRange << endl;
    } else {
        cout << "The previous condition is false" << endl;
    }

    int iValue = 2;
    if (iValue > 0) {
        cout << "Positive\n";
    } else if (iValue < 0) {
        cout << "Negative\n";
    } else {
        cout << "Zero\n";
    }

    // int grade = 0;
    // cout << "Input an integer grade: ";
    // cin >> grade;
    // char letter = 'A';
    // if (grade >= 90 && grade <= 100) {
    //     letter = 'A';
    // } else if (grade >= 80) {
    //     letter = 'B';
    // } else if (grade >= 70) {
    //     letter = 'C';
    // } else if (grade >= 60) {
    //     letter = 'D';
    // } else {
    //     letter = 'F';
    // }
    // cout << "The letter grade is: " << letter << endl;

    // int grade = 0;
    // cout << "Input an integer grade: ";
    // cin >> grade;
    // char letter = 'A';
    // switch (grade / 10) {
    //     case 10:
    //     case 9:
    //         letter = 'A';
    //         break;
    //     case 8:
    //         letter = 'B';
    //         break;
    //     case 7:
    //         letter = 'C';
    //         break;
    //     case 6:
    //         letter = 'D';
    //         break;
    //     default:
    //         letter = 'F';
    //         break;
    // }
    // cout << "The letter grade is: " << letter << endl;

    // int num = 0;
    // cout << "Input an integer: ";
    // cin >> num;
    // for (int i = 1; i <= num; i++) {
    //     if (num % i == 0) {
    //         cout << i << " ";
    //     }
    // }

    // int num = 0;
    // cout << "Input a positive integer: ";
    // cin >> num;
    // int possibleDivisor = 1;
    // while (possibleDivisor <= num) {
    //     if (num % possibleDivisor == 0) {
    //         cout << possibleDivisor << " ";
    //     }
    //     possibleDivisor++;
    // }

    // int grade = 0;
    // do {
    //     cout << "Input a grade between 0 and 100: ";
    //     cin >> grade;
    // } while (grade < 0 || grade > 100);

    int numOfOdds = 0;

    for (int counter = 1; counter <= 10; counter+=2) {
        numOfOdds++;
        if (numOfOdds == 3) continue;
        cout << counter << " ";
    }
}