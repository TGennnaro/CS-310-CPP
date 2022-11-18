#include <iostream>
#include "Course.h"
using namespace std;

int main() {
    Course c1 = Course("C++", 6);
    c1.addStudent("John");
    c1.addStudent("Mary");
    c1.addStudent("Bob");
    c1.addStudent("Alice");
    cout << "Students in the course (" << c1.getCourseName() << "):" << endl;
    for (int i = 0; i < c1.getNumberOfStudents(); i++) {
        cout << c1.getStudents()[i] << endl;
    }
    cout << endl;
    c1.dropStudent("Bob");
    cout << "Students in the course (" << c1.getCourseName() << "):" << endl;
    for (int i = 0; i < c1.getNumberOfStudents(); i++) {
        cout << c1.getStudents()[i] << endl;
    }


    return 0;
}