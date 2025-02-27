#include <iostream>

float get_summation();

int main() {
	float summation = get_summation();
	std::cout << "\nThe summation of all numbers is: " << summation << "\n";
	return 0;
}

float get_summation() {
	float entered_nbr = 0;
	float summation = 0;

	while (entered_nbr != -99) {
		std::cout << "Please enter a number:\n";
		std::cin >> entered_nbr;

		if (entered_nbr != -99) {
			summation += entered_nbr;
		}
	}

	return summation;
}
