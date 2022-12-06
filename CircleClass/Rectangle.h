#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "Object.h"

class Rectangle: public Shape, public Object {
    private:
        double width, height;
    public:
        Rectangle();
        Rectangle(double w, double h);
        Rectangle(double w, double h, string col, Point p);

        double getWidth();
        void setWidth(double w);

        double getHeight();
        void setHeight(double h);

        double getArea();
        double getPerimeter();

        void print();
};

#endif