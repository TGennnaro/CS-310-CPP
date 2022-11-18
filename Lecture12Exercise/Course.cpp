#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(string courseName, int capacity) {
    this->courseName = courseName;
    this->capacity = capacity;
    this->students = new string[capacity];
    this->numberOfStudents = 0;
}

string Course::getCourseName() {
    return this->courseName;
}

void Course::addStudent(string name) {
    if (this->numberOfStudents < this->capacity) {
        this->students[this->numberOfStudents] = name;
        this->numberOfStudents++;
    }
}

void Course::dropStudent(string name) {
    for (int i = 0; i < this->numberOfStudents; i++) {
        if (this->students[i] == name) {
            for (int j = i; j < numberOfStudents - 1; j++) {
                this->students[j] = this->students[j+1];
            }
            this->numberOfStudents--;
            break;
        }
    }
}

string* Course::getStudents() {
    return this->students;
}

int Course::getNumberOfStudents() {
    return this->numberOfStudents;
}

Course::~Course() {
    delete[] this->students;
}