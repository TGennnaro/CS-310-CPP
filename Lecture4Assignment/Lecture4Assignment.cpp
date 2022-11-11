#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
using namespace std;

double getRadians(int degrees) {
    const double pi = 3.14159265358979323846;
    return degrees*pi/180;
}

double getSin(int degrees) {
    return sin(getRadians(degrees));
}

double getCos(int degrees) {
    return cos(getRadians(degrees));
}

double getTangent(int degrees) {
    return tan(getRadians(degrees));
}

int main() {
    const int WIDTH = 10;
    const int PRECISION = 4;

    cout << left;
    cout << setw(WIDTH) << "Degrees" << setw(WIDTH) << "Radians" << setw(WIDTH) << "Sine";
    cout << setw(WIDTH) << "Cosine" << setw(WIDTH) << "Tangent" << endl;

    array<int, 2> degrees = {30, 60};
    for (int degree : degrees) {
        cout << setprecision(PRECISION) << fixed;
        cout << setw(WIDTH) << degree;
        cout << setw(WIDTH) << getRadians(degree);
        cout << setw(WIDTH) << getSin(degree);
        cout << setw(WIDTH) << getCos(degree);
        cout << setw(WIDTH) << getTangent(degree) << endl;
    }


    // int degrees = 30;
    // cout << fixed << setprecision(PRECISION);
    // cout << setw(WIDTH) << degrees << setw(WIDTH) << getRadians(degrees) << setw(WIDTH) << getSin(degrees);
    // cout << setw(WIDTH) << getCos(degrees) << setw(WIDTH) << getTangent(degrees) << endl;

    // degrees = 60;
    // cout << setw(WIDTH) << degrees << setw(WIDTH) << getRadians(degrees) << setw(WIDTH) << getSin(degrees);
    // cout << setw(WIDTH) << getCos(degrees) << setw(WIDTH) << getTangent(degrees) << endl;

    return 0;
}