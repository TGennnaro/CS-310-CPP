#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
#include "Point.h"
using namespace std;

class Shape {
    private:
        string color;
        Point location;
    public:
        Shape();
        Shape(string initialCol, Point initialLoc);

        string getColor();
        void setColor(string newColor);

        Point getLocation();
        void move(double delX, double delY);
        void move(Point p);

        virtual void print();
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
};

#endif