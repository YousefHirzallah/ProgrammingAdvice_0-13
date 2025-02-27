#include <iostream>

struct PiggyBankContent {
	int pennies;
	int nickels;
	int quarters;
	int dollars;
	int dimes;
};

float get_total_pennies(const PiggyBankContent& content);

int main() {
	PiggyBankContent content;

	std::cout << "Please enter number of pennies: \n";
	std::cin >> content.pennies;
	std::cout << "Please enter number of nickels: \n";
	std::cin >> content.nickels;
	std::cout << "Please enter number of dimes: \n";
	std::cin >> content.dimes;
	std::cout << "Please enter number of quarters: \n";
	std::cin >> content.quarters;
	std::cout << "Please enter number of dollars: \n";
	std::cin >> content.dollars;

	float total_pennies = get_total_pennies(content);
	std::cout << "\n~~~~~~~~~~~~~~~\nTotal Pennies = " << total_pennies << " Pennies.\n";
	std::cout << "\n\nTotal Dollars = " << total_pennies / 100.0 << " Dollars.\n";

	return 0;
}

float get_total_pennies(const PiggyBankContent& content) {
	float total_pennies = 0;
	total_pennies += 1 * content.pennies;
	total_pennies += 5 * content.nickels;
	total_pennies += 25 * content.quarters;
	total_pennies += 100 * content.dollars;
	total_pennies += 10 * content.dimes;
	return total_pennies;
}
