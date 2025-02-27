#include <iostream>

using namespace std;

void SwapNumbers(float &nbr1, float &nbr2);

int main()
{
	float number1, number2;

	cout << "Please enter the 1st number: ";
	cin >> number1;
	cout << "Please enter the 2nd number: ";
	cin >> number2;

	cout << "Before swapping: " << "Number 1 = " << number1 << ", Number 2 = " << number2 << endl;

	SwapNumbers(number1, number2);

	cout << "After swapping: " << "Number 1 = " << number1 << ", Number 2 = " << number2 << endl;

	return 0;
}

void SwapNumbers(float &nbr1, float &nbr2)
{
	float temp = nbr1;
	nbr1 = nbr2;
	nbr2 = temp;
}
