#include <iostream>

enum Operations {
	addition = '+',
	subtraction = '-',
	multiplication = '*',
	division = '/'
};

struct Numbers {
	float nbr1;
	float nbr2;
};

float calculate_result(Operations operation, const Numbers& numbers);

int main() {
	Numbers numbers;

	std::cout << "Please enter the 1st Number:\n";
	std::cin >> numbers.nbr1;
	std::cout << "Please enter the 2nd Number:\n";
	std::cin >> numbers.nbr2;

	char op_char;
	std::cout << "Please enter the operation (+, -, *, /):\n";
	std::cin >> op_char;
	Operations operation = static_cast<Operations>(op_char);

	float result = calculate_result(operation, numbers);

	std::cout << "\nThe Result:\n";
	std::cout << numbers.nbr1 << "  " << op_char << "  " << numbers.nbr2 << "  =  " << result << "\n";

	return 0;
}

float calculate_result(Operations operation, const Numbers& numbers) {
	switch (operation) {
		case addition:
			return numbers.nbr1 + numbers.nbr2;
		case subtraction:
			return numbers.nbr1 - numbers.nbr2;
		case multiplication:
			return numbers.nbr1 * numbers.nbr2;
		case division:
			return numbers.nbr1 / numbers.nbr2;
		default:
			return 0;
	}
}
