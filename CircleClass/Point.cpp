#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::print() {
    cout << "[object Point] at (" << x << ", " << y << ")" << endl;
}