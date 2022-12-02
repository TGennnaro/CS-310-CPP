#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    char city[] = "Newark";
    string str("Hello");
    cout << str << endl;

    string emptyStr;
    cout << boolalpha << emptyStr.empty() << endl;

    emptyStr.assign("Hello");
    cout << "Expected -=- Hello : " << emptyStr << endl;

    emptyStr.append("C++");
    cout << emptyStr << endl;

    emptyStr += "C++";
    cout << emptyStr << endl;

    cout << "The length of the string is " << emptyStr.length() << endl;
    cout << "The length of the string is " << emptyStr.size() << endl;

    cout << emptyStr[0] << endl;
    cout << emptyStr.at(emptyStr.length() - 1) << endl;

    emptyStr.replace(emptyStr.length() - 3, 3, "");
    cout << emptyStr << endl;

    emptyStr.erase(emptyStr.length() - 3, 3);
    cout << emptyStr << endl;
    cout << emptyStr.length() << endl;

    bool flag = isdigit(emptyStr[0]);
    cout << flag << endl;
    flag = isupper(emptyStr[0]);
    cout << flag << endl;
    flag = islower(emptyStr[0]);
    cout << flag << endl;
    flag = isalnum(emptyStr[0]);
    cout << "Is a letter or digit: " << flag << endl;

    string substr = emptyStr.substr(0, 3);
    cout << "First three letters: " << substr << endl;

    cout << "The full string: " << emptyStr.substr(0) << endl;

    if (emptyStr.compare(substr) > 0) {
        cout << emptyStr << " is greater than " << substr << endl;
    } else if (emptyStr.compare(substr) < 0) {
        cout << emptyStr << " is less than " << substr << endl;
    } else {
        cout << emptyStr << " is equal to " << substr << endl;
    }
    cout << (emptyStr >= substr) << endl;

    // string.find("string", startIndex)
    if (emptyStr.find("He", 2) != string::npos) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    string numStr("123");
    int num = stoi(numStr);
    cout << num << endl;

    numStr = "123.4";
    double numDouble = stod(numStr);
    cout << numDouble << endl;

    stringstream ss(numStr);
    ss >> numDouble;
    cout << numDouble << endl;

    numStr = "123";
    stringstream ss1(numStr);
    ss1 >> num;
    cout << num << endl;

    string doubleStrNoFormat = to_string(numDouble);
    cout << doubleStrNoFormat << endl;

    stringstream ss2;
    ss2 << fixed << setprecision(2) << numDouble;
    cout << ss2.str() << endl;

    return 0;
}