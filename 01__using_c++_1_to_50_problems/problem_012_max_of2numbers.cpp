#include <iostream>
#include <iomanip>

using namespace std;

void Read2Numbers(float &nbr1, float &nbr2);
void PrintMaxNumberResult(float max_number);

int main()
{
	float number1, number2;

	Read2Numbers(number1, number2);
	PrintMaxNumberResult(number1 > number2 ? number1 : number2);

	return 0;
}

void Read2Numbers(float &nbr1, float &nbr2)
{
	cout << "Please enter the 1st number: ";
	cin >> nbr1;
	cout << "Please enter the 2nd number: ";
	cin >> nbr2;
}

void PrintMaxNumberResult(float max_number)
{
	cout << "The maximum number is: " << fixed << setprecision(3) << max_number << endl;
}
