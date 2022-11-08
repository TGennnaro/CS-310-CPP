#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    double salary;
};

void printEmployee(const Employee& e) {
    cout << "Employee's Info: "
    << e.name << ", " << e.id << ", $" << e.salary << endl;
}

Employee readEmployee() {
    Employee e;
    cout << "Enter Employee name: ";
    cin.ignore(1000, '\n');
    getline(cin, e.name);
    cout << "Enter Employee ID: ";
    cin >> e.id;
    cout << "Enter Employee salary: ";
    cin >> e.salary;
    return e;
}

int findEmployee(const Employee employees[], int id, int size) {
    for (int i = 0; i < size; i++) {
        if (employees[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    cout << "How many Employees?: ";
    int size;
    cin >> size;

    Employee* employees = new Employee[size];
    for (int i = 0; i < size; i++) {
        employees[i] = readEmployee();
    }
    for (int i = 0; i < size; i++) {
        printEmployee(employees[i]);
    }

    cout << "Enter an ID to search: ";
    int id;
    cin >> id;
    int employeeIndex = findEmployee(employees, id, size);
    if (employeeIndex == -1) {
        cout << "Could not find Employee with ID " << id << "!" << endl;
        return 0;
    }
    cout << "Found Employee: " << employees[employeeIndex].name << endl;

    return 0;
}