#pragma once
#include "Point.h"
#include "Shape.h"
#include "Object.h"

class Circle: public Shape, public Object {
    private:
        double radius;
    public:
        Circle();
        Circle(double r);
        Circle(double r, string col, Point p);

        void setRadius(double r);
        double getRadius();

        double getArea();
        double getDiameter();
        double getPerimeter();

        void print();

        ~Circle();
};