#include <iostream>

int validateNumberInRange(int enteredNumber, int from, int to) {
	return enteredNumber >= from && enteredNumber <= to;
}

void readAge(int& age, int from, int to) {
	std::cout << "Please enter your age: ";
	std::cin >> age;
	if (!validateNumberInRange(age, from, to)) {
		std::cout << "Invalid Age !!\n";
		readAge(age, from, to);
	}
}

void printAgeResult(int age) {
	std::cout << "The age is " << age << " and it is Valid\n";
}

int main() {
	int age, from, to;

	std::cout << "Please enter age range:\nFrom: ";
	std::cin >> from;
	std::cout << "To: ";
	std::cin >> to;

	readAge(age, from, to);
	printAgeResult(age);

	return 0;
}
