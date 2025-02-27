#include <iostream>


int read_positive_nbr(const std::string &message);
void print_result(const std::string &message, float result);
void get_total_seconds(int days, int hours, int minutes, int seconds, float &total_seconds);

int main() {
	int days, hours, minutes, seconds;
	float total_seconds = 0.0;


	std::cout << "Please enter these fields:\n";
	days = read_positive_nbr("Enter the number of days:");
	hours = read_positive_nbr("Enter the number of hours:");
	minutes = read_positive_nbr("Enter the number of minutes:");
	seconds = read_positive_nbr("Enter the number of seconds:");


	get_total_seconds(days, hours, minutes, seconds, total_seconds);

	print_result("The total seconds are:", total_seconds);

	return 0;
}


int read_positive_nbr(const std::string &message) {
	int value;
	do {
		std::cout << message << "\n";
		std::cin >> value;
	} while (value <= 0);
	return value;
}


void get_total_seconds(int days, int hours, int minutes, int seconds, float &total_seconds) {
	total_seconds = seconds;
	total_seconds += 60 * minutes;
	total_seconds += 60 * 60 * hours;
	total_seconds += 24 * 60 * 60 * days;
}


void print_result(const std::string &message, float result) {
	std::cout << "\n" << message << " " << result << " seconds\n";
}
