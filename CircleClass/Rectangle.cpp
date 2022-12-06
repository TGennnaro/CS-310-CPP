#include "Rectangle.h"

Rectangle::Rectangle():Shape(), Object("Rectangle") {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double w, double h):Shape(), Object("Rectangle") {
    width = w;
    height = h;
}

Rectangle::Rectangle(double w, double h, string col, Point p):Shape(col, p), Object("Rectangle") {
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
    Object::print();
    cout << ", color: " << getColor() << ", top-left corner: ";
    getLocation().print();
    cout << ", Width: " << width << ", Height: " << height << endl;
}