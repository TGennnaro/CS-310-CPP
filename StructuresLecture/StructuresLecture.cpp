#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

struct Student {
    int id;
    Person personInfo;
    double gpa;
};

Student getStudentInfo() {
    Student s;
    cout << "Enter student ID: ";
    cin >> s.id;
    cin.ignore(1000, '\n');
    cout << "Enter student name: ";
    getline(cin, s.personInfo.name);
    cout << "Enter student age: ";
    cin >> s.personInfo.age;
    cin.ignore(1000, '\n');
    cout << "Enter student GPA: ";
    cin >> s.gpa;
    return s;
}

void printStudentInfo(const Student& s) {
    cout << "Student ID: " << s.id << ", "
    << "Student name: " << s.personInfo.name << ", "
    << "Student age: " << s.personInfo.age << ", "
    << "Student GPA: " << s.gpa << endl;
}

void printStudents(Student s[], int size) {
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << ". ";
        printStudentInfo(s[i]);
    }
}

void updateStudentAge(Student&s) {
    s.personInfo.age++;
}

void updateStudentAge(Student& s, int newAge) {
    s.personInfo.age = newAge;
}

int main() {
    // Student john;
    // cout << "Size of Student struct: " << sizeof(Student) << endl;
    // cout << sizeof(int) + sizeof(string) + sizeof(double) << endl;
    // cout << "John's ID: " << john.id << endl;

    // john = getStudentInfo();
    // printStudentInfo(john);

    // Student* pStudent = &john;
    // cout << "GPA refered by pointer: " << (*pStudent).gpa << endl;
    // cout << "GPA refered by pointer: " << pStudent->gpa << endl;

    cout << "Number of students: ";
    int size;
    cin >> size;
    Student* pStudent = new Student[size];

    for (int i = 0; i < size; i++) {
        pStudent[i] = getStudentInfo();
    }
    printStudents(pStudent, size);
    updateStudentAge(pStudent[0]);
    printStudents(pStudent, size);

    delete[] pStudent;
    pStudent = NULL;

    return 0;
}