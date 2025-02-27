#include <iostream>

void print_result(const std::string& message, float result);
float get_nbr_of_weeks(int nbr_of_hours);
float get_nbr_of_days(int nbr_of_hours);
int read_positive_nbr();

int main() {
	int nbr_of_hours = read_positive_nbr();

	float nbr_of_days = get_nbr_of_days(nbr_of_hours);
	float nbr_of_weeks = get_nbr_of_weeks(nbr_of_hours);

	print_result("The number of days is:", nbr_of_days);
	print_result("The number of weeks is:", nbr_of_weeks);

	return 0;
}

void print_result(const std::string& message, float result) {
	std::cout << "\n" << message << "\n----->>> (" << result << ")\n";
}

float get_nbr_of_weeks(int nbr_of_hours) {
	return static_cast<float>(nbr_of_hours) / 24.0 / 7.0;
}

float get_nbr_of_days(int nbr_of_hours) {
	return static_cast<float>(nbr_of_hours) / 24.0;
}

int read_positive_nbr() {
	int nbr_of_hours = -1;
	std::cout << "Please enter a positive number:\n";
	while (nbr_of_hours <= 0) {
		std::cin >> nbr_of_hours;
	}
	return nbr_of_hours;
}
