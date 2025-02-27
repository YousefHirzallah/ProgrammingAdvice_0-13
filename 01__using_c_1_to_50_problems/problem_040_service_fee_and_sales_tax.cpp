#include <iostream>
using namespace std;

const float SERVICES_FREE = 1.1;
const float SALES_TAX = 1.16;

void print_result(const string& message, float result);
float calculate_total_bill(float bill_value);

int main() {
	float bill_value;
	cout << "Please enter the Bill value:" << endl;
	cin >> bill_value;
	while (bill_value <= 0) {
		cout << "Please enter a positive value:" << endl;
		cin >> bill_value;
	}

	float total_bill = calculate_total_bill(bill_value);
	print_result("The Total Bill result is:", total_bill);

	return 0;
}

void print_result(const string& message, float result) {
	cout << message << endl;
	cout << "-----> (" << result << ")" << endl;
}

float calculate_total_bill(float bill_value) {
	float total_bill = bill_value;
	total_bill *= SERVICES_FREE;
	total_bill *= SALES_TAX;
	return total_bill;
}
