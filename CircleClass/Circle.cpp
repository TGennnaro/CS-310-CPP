#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle():Shape(), Object("Circle") {
    this->radius = 1;
}

Circle::Circle(double r):Shape(), Object("Circle") {
    this->radius = r;
}

Circle::Circle(double radius, string color, Point loc):Shape(color, loc), Object("Circle") {
    this->radius = radius;
}

void Circle::setRadius(double r) {
    this->radius = r;
}

double Circle::getRadius() {
    return this->radius;
}

double Circle::getArea() {
    return 3.14 * this->radius * this->radius;
}

double Circle::getDiameter() {
    return 2 * this->radius;
}

double Circle::getPerimeter() {
    return 2 * 3.14 * this->radius;
}

void Circle::print() {
    Object::print();
    cout << ", color: " << this->getColor() << ", center: ";
    this->getLocation();
    cout << "Radius: " << this->radius << ", " << endl;
}

Circle::~Circle() {
    cout << "Circle object is destroyed" << endl;
}