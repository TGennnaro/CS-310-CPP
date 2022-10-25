#include <iostream>
using namespace std;

int predictTuition(double current, double rate, double target) {
    int years = 0;
    while (current < target) {
        current = current * (1 + rate);
        years++;
    }
    return years;
}

int predictTuition1(double &current, double rate, double target) {
    int years = 0;
    while (current < target) {
        current = current * (1 + rate);
        years++;
    }
    return years;
}

int main() {
    cout << "Enter the current Tuition: ";
    double current;
    cin >> current;
    cout << "Enter the rate of increase: ";
    double rate;
    cin >> rate;
    cout << "Enter the target Tuition: ";
    double target;
    cin >> target;
    int years = predictTuition(current, rate, target);
    cout << "It will take " << years << " years for the tuition to go from " << current << " to " << target << " at a rate of " << rate << endl;
    years = predictTuition1(current, rate, target);
    cout << "It will take " << years << " years for the tuition to go from " << current << " to " << target << " at a rate of " << rate << endl;

    return 0;
}