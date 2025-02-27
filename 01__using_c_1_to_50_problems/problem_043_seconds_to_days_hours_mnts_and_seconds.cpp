#include <iostream>
#include <cmath>

const int SECONDS_PER_DAY = 24 * 60 * 60;
const int SECONDS_PER_HOUR = 60 * 60;
const int SECONDS_PER_MINUTE = 60;

void print_all_time_categories(int days, int hours, int minutes, int seconds);
void get_time_categories(int total_seconds, int& days, int& hours, int& minutes, int& seconds);
int read_positive_nbr(const std::string& message, const std::string& prompt);

int main() {
	int entered_seconds = read_positive_nbr("Please enter a positive number:", "Enter the number of seconds: ");

	int days = 0, hours = 0, minutes = 0, seconds = 0;
	get_time_categories(entered_seconds, days, hours, minutes, seconds);
	print_all_time_categories(days, hours, minutes, seconds);

	return 0;
}

void print_all_time_categories(int days, int hours, int minutes, int seconds) {
	std::cout << "\n" << (days < 10 ? "0" : "") << days << ":"
			  << (hours < 10 ? "0" : "") << hours << ":"
			  << (minutes < 10 ? "0" : "") << minutes << ":"
			  << (seconds < 10 ? "0" : "") << seconds << "\n";
}

void get_time_categories(int total_seconds, int& days, int& hours, int& minutes, int& seconds) {
	days = total_seconds / SECONDS_PER_DAY;
	total_seconds %= SECONDS_PER_DAY;

	hours = total_seconds / SECONDS_PER_HOUR;
	total_seconds %= SECONDS_PER_HOUR;

	minutes = total_seconds / SECONDS_PER_MINUTE;
	total_seconds %= SECONDS_PER_MINUTE;

	seconds = total_seconds;
}

int read_positive_nbr(const std::string& message, const std::string& prompt) {
	int number = -1;
	std::cout << "\n" << message << "\n";
	while (number <= 0) {
		std::cout << prompt << "\n";
		std::cin >> number;
	}
	return number;
}
