#include <iostream>
using namespace std;

float get_number(const string& message);
void print_result(float remainder);

int main() {
	float total_bill = get_number("Please enter the total bill:");
	float cash_paid = get_number("Please enter the cash that you paid:");

	float remainder = total_bill - cash_paid;
	print_result(remainder);

	return 0;
}

float get_number(const string& message) {
	float number;
	cout << message << endl;
	cin >> number;
	return number;
}

void print_result(float remainder) {
	if (remainder > 0)
		cout << "You have to pay: " << remainder << "$" << endl;
	else
		cout << "You will have back: " << -remainder << "$" << endl;
}
