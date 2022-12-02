#include "Rectangle.h"

Rectangle::Rectangle() {
    width = 0;
    height = 0;
}

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

Rectangle::Rectangle(double w, double h, string col, Point p):Shape(col, p) {
    width = w;
    height = h;
}

double Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(double w) {
    width = w;
}

double Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(double h) {
    height = h;
}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::print() {
    cout << "[Rectangle] ";
    Shape::print();
    cout << ", Width: " << width << ", Height: " << height << endl;
}