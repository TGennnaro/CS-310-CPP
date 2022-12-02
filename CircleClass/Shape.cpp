#include "Shape.h"

Shape::Shape() {
    color = "White";
}

Shape::Shape(string initialCol, Point initialLoc) {
    color = initialCol;
    location = initialLoc;
}

string Shape::getColor() {
    return color;
}

void Shape::setColor(string newColor) {
    color = newColor;
}

Point Shape::getLocation() {
    return location;
}

void Shape::move(double delX, double delY) {
    double currentX = location.getX();
    double currentY = location.getY();
    location.setX(currentX + delX);
    location.setY(currentY + delY);
}

void Shape::move(Point p) {
    location = p;
}

void Shape::print() {
    cout << "Color: " << color;
    cout << ", Location: ";
    location.print();
}