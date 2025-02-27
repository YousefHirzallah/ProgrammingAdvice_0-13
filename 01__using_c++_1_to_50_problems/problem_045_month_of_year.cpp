#include <iostream>

enum e_months_of_year {
	jan = 1,
	feb,
	march,
	apr,
	may,
	june,
	july,
	aug,
	sep,
	oct,
	nov,
	dec
};

void print_month_result(e_months_of_year month);
e_months_of_year read_month();

int main() {
	e_months_of_year month = read_month();
	print_month_result(month);
	return 0;
}

void print_month_result(e_months_of_year month) {
	switch (month) {
		case jan:   std::cout << "\nYour month is: January\n"; break;
		case feb:   std::cout << "\nYour month is: February\n"; break;
		case march: std::cout << "\nYour month is: March\n"; break;
		case apr:   std::cout << "\nYour month is: April\n"; break;
		case may:   std::cout << "\nYour month is: May\n"; break;
		case june:  std::cout << "\nYour month is: June\n"; break;
		case july:  std::cout << "\nYour month is: July\n"; break;
		case aug:   std::cout << "\nYour month is: August\n"; break;
		case sep:   std::cout << "\nYour month is: September\n"; break;
		case oct:   std::cout << "\nYour month is: October\n"; break;
		case nov:   std::cout << "\nYour month is: November\n"; break;
		case dec:   std::cout << "\nYour month is: December\n"; break;
		default:    std::cout << "\nInvalid month entered.\n"; break;
	}
}

e_months_of_year read_month() {
	unsigned short entered_month;
	std::cout << "Please enter month number\n\"1)January, 2)February, 3)March, 4)April, 5)May, 6)June, 7)July, 8)August, 9)September, 10)October, 11)November, 12)December\": ";
	std::cin >> entered_month;

	while (entered_month < 1 || entered_month > 12) {
		std::cout << "Invalid input; please enter a number between 1 and 12: ";
		std::cin >> entered_month;
	}

	return static_cast<e_months_of_year>(entered_month);
}
