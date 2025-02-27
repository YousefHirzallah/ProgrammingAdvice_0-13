#include <iostream>
#include <cmath>

bool is_prime(int number);
int get_positive_number();

int main() {
	int number = get_positive_number();
	if (is_prime(number))
		std::cout << "\nThe number '" << number << "' is Prime. :)\n";
	else
		std::cout << "\nThe number '" << number << "' is not Prime. :(\n";
	return 0;
}

bool is_prime(int number) {
	if (number <= 1) return false;
	for (int i = 2; i <= std::sqrt(number); ++i) {
		if (number % i == 0) return false;
	}
	return true;
}

int get_positive_number() {
	int number;
	do {
		std::cout << "Please enter a positive number to check if the number is prime: ";
		std::cin >> number;
	} while (number <= 0);
	return number;
}
