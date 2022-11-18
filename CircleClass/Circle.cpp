#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
    this->radius = 1;
    this->center = Point();
}

Circle::Circle(double r, Point p) {
    this->radius = r;
    this->center = p;
}

void Circle::setRadius(double r) {
    this->radius = r;
}

double Circle::getRadius() {
    return this->radius;
}

void Circle::setCenter(Point p) {
    this->center = p;
}

Point Circle::getCenter() {
    return this->center;
}

double Circle::getArea() {
    return 3.14 * this->radius * this->radius;
}

void Circle::print() {
    cout << "[object Circle] Radius: " << this->radius << endl;
    center.print();
}

Circle::~Circle() {
    cout << "Circle object is destroyed" << endl;
}