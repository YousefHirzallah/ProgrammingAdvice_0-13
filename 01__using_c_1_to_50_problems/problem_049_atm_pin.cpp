#include <iostream>
#include <string>

void print_result(bool is_valid_pin);

int main() {
	std::string atm_pin;
	bool is_valid_pin = false;
	int attempts = 0;
	const int max_attempts = 3;


	while (attempts < max_attempts) {
		std::cout << "Please enter your PIN: ";
		std::cin >> atm_pin;

		if (atm_pin == "1234") {
			is_valid_pin = true;
			break;
		} else {
			std::cout << "Wrong PIN! Please try again.\n";
		}
		attempts++;
	}


	print_result(is_valid_pin);

	return 0;
}

void print_result(bool is_valid_pin) {
	const float C_BALANCE = 8000.8;

	if (is_valid_pin) {
		std::cout << "\nYour Balance is: $" << C_BALANCE << "\n";
	} else {
		std::cout << "You have exceeded the maximum number of attempts. Access denied.\n";
	}
}
