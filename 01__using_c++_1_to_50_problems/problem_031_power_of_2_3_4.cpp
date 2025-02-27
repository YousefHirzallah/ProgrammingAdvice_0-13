#include <iostream>
#include <cmath>
using namespace std;

void printPowerOfTwo(int number);
void printPowerOfThree(int number);
void printPowerOfFour(int number);

int main() {
	int enteredNumber;

	cout << "Enter a number: ";
	cin >> enteredNumber;

	printPowerOfTwo(enteredNumber);
	printPowerOfThree(enteredNumber);
	printPowerOfFour(enteredNumber);

	return 0;
}

void printPowerOfTwo(int number) {
	cout << "The result of " << number << " to the power of 2 is: " << pow(number, 2) << endl;
}

void printPowerOfThree(int number) {
	cout << "The result of " << number << " to the power of 3 is: " << pow(number, 3) << endl;
}

void printPowerOfFour(int number) {
	cout << "The result of " << number << " to the power of 4 is: " << pow(number, 4) << endl;
}
