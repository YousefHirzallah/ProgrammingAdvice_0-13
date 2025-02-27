#include <iostream>

enum e_days {
	sunday = 1,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday
};

void print_day_result(e_days day);
e_days read_day();

int main() {
	e_days day = read_day();
	print_day_result(day);
	return 0;
}

void print_day_result(e_days day) {
	switch (day) {
		case sunday:
			std::cout << "\nYour day is: Sunday\n";
		break;
		case monday:
			std::cout << "\nYour day is: Monday\n";
		break;
		case tuesday:
			std::cout << "\nYour day is: Tuesday\n";
		break;
		case wednesday:
			std::cout << "\nYour day is: Wednesday\n";
		break;
		case thursday:
			std::cout << "\nYour day is: Thursday\n";
		break;
		case friday:
			std::cout << "\nYour day is: Friday\n";
		break;
		case saturday:
			std::cout << "\nYour day is: Saturday\n";
		break;
		default:
			std::cout << "\nInvalid day entered.\n";
	}
}

e_days read_day() {
	unsigned short entered_day;
	std::cout << "Please enter day number (1)Sunday, (2)Monday, (3)Tuesday, (4)Wednesday, (5)Thursday, (6)Friday, (7)Saturday: ";
	std::cin >> entered_day;

	while (entered_day < 1 || entered_day > 7) {
		std::cout << "Invalid input; please enter a number between 1 and 7: ";
		std::cin >> entered_day;
	}

	return static_cast<e_days>(entered_day);
}
