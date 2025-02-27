#include <iostream>

using namespace std;

int readNumber();
float calculateHalfNumber(int number);
void printHalfNumberResult(int number);

int main() {
	printHalfNumberResult(readNumber());
	return 0;
}

int readNumber() {
	int number;
	cout << "Please enter a number: ";
	cin >> number;
	return number;
}

float calculateHalfNumber(int number) {
	return static_cast<float>(number) / 2.0;
}

void printHalfNumberResult(int number) {
	cout << "Half of " << number << " is: " << calculateHalfNumber(number) << endl;
}
