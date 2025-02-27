#include <iostream>
#include <cmath>
using namespace std;

void printPower(int number, int m);

int main() {
    int enteredNumber, m;

    cout << "Enter a number: ";
    cin >> enteredNumber;

    cout << "Enter the power (m): ";
    cin >> m;

    printPower(enteredNumber, m);

    return 0;
}

void printPower(int number, int m) {
    cout << "The result of " << number << " to the power of " << m << " is: " << pow(number, m) << endl;
}
