#pragma once
#include <iostream>
using namespace std;

class Course {
    private:
        string courseName;
        string* students;
        int numberOfStudents;
        int capacity;
    public:
        Course(string courseName, int capacity);
        string getCourseName();
        void addStudent(string name);
        void dropStudent(string name);
        string* getStudents();
        int getNumberOfStudents();
        ~Course();
};