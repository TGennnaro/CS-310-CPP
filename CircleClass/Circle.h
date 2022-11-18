#pragma once
#include "Point.h"

class Circle {
    private:
        double radius;
        Point center;
    public:
        Circle();
        Circle(double r, Point p);

        void setRadius(double r);
        double getRadius();

        double getArea();

        void setCenter(Point p);
        Point getCenter();

        void print();

        ~Circle();
};