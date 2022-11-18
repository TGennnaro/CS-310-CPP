#include <iostream>
#include <string>
#include "Circle.h"
#include "Point.h"
using namespace std;

int main() {
    Circle c1;
    c1.getCenter().setX(4);
    c1.getCenter().setY(5);
    c1.print();
    c1.setRadius(10);
    cout << "New radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;

    Point p;
    p.setX(2);
    p.setY(4);
    Circle c2(2, p);
    c2.print();
    cout << "Memory address for c1: " << &c1 << endl;
    cout << "Memory address for c2: " << &c2 << endl;

    c1 = c2;
    c1.print();

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