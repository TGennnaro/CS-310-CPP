#include <iostream>
#include <string>
using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle() {
            radius = 1;
        }

        Circle(double r) {
            radius = r;
        }

        void setRadius(double r) {
            radius = r;
        }

        double getRadius() {
            return radius;
        }

        double getArea();

        void print() {
            cout << "[object Circle] Radius: " << radius << endl;
        }
};

int main() {
    Circle c1;
    c1.print();
    c1.setRadius(10);
    cout << "New radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;

    Circle c2(2);
    c2.print();
    cout << "Memory address for c1: " << &c1 << endl;
    cout << "Memory address for c2: " << &c2 << endl;

    c1 = c2;

    c1.print();
    c2.print();

    return 0;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}