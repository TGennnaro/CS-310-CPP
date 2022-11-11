#include <iostream>
#include <limits>
#include <cfloat>
#include <string>
using namespace std;

char global_variable_c = 'a';

int main()
{
    cout << "Hello World!\n" << "Welcome to C++" << endl;
    cout << "The number of bytes for int: " << sizeof(int) << endl;
    cout << "The limit of int is: " << INT_MIN << " <-> " << INT_MAX << endl;
    cout << "The limit of single precision floating point is " << FLT_MIN << " <-> " << FLT_MAX << endl;

    double number = 2.011199;
    cout << "The number is: " << number << endl;
    int a(3);
    cout << a << endl;
    unsigned b(2);
    cout << b << endl;
    string name("John");
    cout << name << endl;
    cout << sizeof(name) << endl;

    const double PI = 3.14159265358979323846;
    
    return 0;
}