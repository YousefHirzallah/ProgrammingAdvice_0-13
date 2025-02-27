#include <iostream>

float get_commission_percentage(float total_sales);

int main() {
	float total_sales;

	std::cout << "Enter the total sales: ";
	std::cin >> total_sales;

	float commission_percentage = get_commission_percentage(total_sales);
	float total_commission = total_sales * commission_percentage;

	std::cout << "Commission Percentage is: " << commission_percentage * 100 << "%\n";
	std::cout << "Total Commission is: " << total_commission << "\n";

	return 0;
}

float get_commission_percentage(float total_sales) {
	if (total_sales > 1000000)
		return 0.01;
	else if (total_sales > 500000)
		return 0.02;
	else if (total_sales > 100000)
		return 0.03;
	else if (total_sales > 50000)
		return 0.05;
	else
		return 0.00;
}
