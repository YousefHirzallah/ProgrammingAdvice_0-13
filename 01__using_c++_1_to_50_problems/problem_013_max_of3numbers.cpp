#include <iostream>
#include <iomanip>

using namespace std;

void Read3Numbers(float &nbr1, float &nbr2, float &nbr3);
void PrintMaxNumberResult(float max_number);

int main()
{
	float number1, number2, number3;

	Read3Numbers(number1, number2, number3);
	float max_number = (number1 > number2) ? (number1 > number3 ? number1 : number3)
										   : (number2 > number3 ? number2 : number3);
	PrintMaxNumberResult(max_number);

	return 0;
}

void Read3Numbers(float &nbr1, float &nbr2, float &nbr3)
{
	cout << "Please enter the 1st number: ";
	cin >> nbr1;
	cout << "Please enter the 2nd number: ";
	cin >> nbr2;
	cout << "Please enter the 3rd number: ";
	cin >> nbr3;
}

void PrintMaxNumberResult(float max_number)
{
	cout << "The maximum number is: " << fixed << setprecision(3) << max_number << endl;
}
