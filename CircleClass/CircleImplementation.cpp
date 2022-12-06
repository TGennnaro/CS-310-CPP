#include <iostream>
#include <string>
#include "Circle.h"
#include "Point.h"
#include "Rectangle.h"
using namespace std;

void printShape(Shape& s) {
    s.print();
    cout << "Area: " << s.getArea() << endl;
    cout << "Perimeter: " << s.getPerimeter() << endl;
}

void printShape(Shape* s) {
    s->print();
    cout << "Area: " << s->getArea() << endl;
    cout << "Perimeter: " << s->getPerimeter() << endl;
}

Shape* largerArea(Shape* obj1, Shape* obj2) {
    if (obj1->getArea() > obj2->getArea())
        return obj1;
    else
        return obj2;
}

int main() {
    Rectangle r;
    r.print();
    r.setColor("Yellow");
    r.setHeight(0.1);
    r.setWidth(0.01);
    r.move(1, 2);
    r.print();

    // Circle c1;
    // Shape& s = c1;
    // s.print();

    // Shape* pS = &c1;
    // pS->print();

    // Shape s;
    // s.print();
    // cout << endl;

    Circle c1;
    c1.print();
    c1.setRadius(10);

    Shape* result = largerArea(&r, &c1);
    printShape(result);
    // cout << "New radius: " << c1.getRadius() << endl;
    // cout << "Area: " << c1.getArea() << endl;

    // c1.move(2, 3);
    // c1.print();

    // Point p;
    // p.setX(10);
    // p.setY(10);
    // c1.move(p);
    // c1.print();

    // cout << "Perimeter: " << c1.getPerimeter() << endl;
    // cout << "Diameter: " << c1.getDiameter() << endl;

    // Circle c2(0.1, "Red", p);
    // c2.print();

    // Circle c1;
    // c1.getCenter().setX(4);
    // c1.getCenter().setY(5);
    // c1.print();
    // c1.setRadius(10);
    // cout << "New radius: " << c1.getRadius() << endl;
    // cout << "Area: " << c1.getArea() << endl;

    // Point p;
    // p.setX(2);
    // p.setY(4);
    // Circle c2(2, p);
    // c2.print();
    // cout << "Memory address for c1: " << &c1 << endl;
    // cout << "Memory address for c2: " << &c2 << endl;

    // c1 = c2;
    // c1.print();

    // Circle* pCircle = &c1;
    // cout << pCircle->getRadius() << endl;
    // cout << (*pCircle).getRadius() << endl;

    // Circle circles[2];
    // circles[0].print();
    // circles[1].print();

    // Circle* p1 = new Circle();
    // p1->print();

    // delete p1;
    // p1 = NULL;

    // const int size = 2;
    // p1 = new Circle[size];
    // p1[0].print();
    // p1[0].setRadius(22);
    // p1[0].print();

    // delete[] p1;
    // p1 = NULL;

    return 0;
}