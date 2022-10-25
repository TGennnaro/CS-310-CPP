#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 4;
    int y = 10;
    int a = 2, b = 2, c = 2;
    cout << (3+4*x)/5 - 10*(y-5)*(a+b+c)/x + 9*(4/x+(9+x)/y) << endl;
	cout << x++ << endl;
	cout << x++ << endl;
	cout << (x == 5 ? "x is 5" : "x is not 5, x is " + to_string(x)) << endl;

	int userInput;
	cout << "Please provide an int input: ";
	cin >> userInput;
	cout << "Your input: " << userInput << endl;

    return 0;
}