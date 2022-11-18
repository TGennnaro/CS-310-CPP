#pragma once

class Point {
    private:
        double x, y;
    public:
        Point();
        void setX(double x);
        void setY(double y);
        double getX();
        double getY();
        void print();
};