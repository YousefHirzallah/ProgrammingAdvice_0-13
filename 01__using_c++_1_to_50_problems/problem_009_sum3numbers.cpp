#include <iostream>
#include <iomanip>

using namespace std;

	void PrintSumResult(float total);
	float CalculateSumOf3Numbers(float num1, float num2, float num3);
	void Read3Numbers(float &num1, float &num2, float &num3);



int main()
{
	float num1, num2, num3;

	Read3Numbers(num1, num2, num3);
	float total = CalculateSumOf3Numbers(num1, num2, num3);
	PrintSumResult(total);
}

void Read3Numbers(float &num1, float &num2, float &num3)
{
	cout << "Please enter the 1st number: ";
	cin >> num1;
	cout << "Please enter the 2nd number: ";
	cin >> num2;
	cout << "Please enter the 3rd number: ";
	cin >> num3;
}

float CalculateSumOf3Numbers(float num1, float num2, float num3)
{
	return num1 + num2 + num3;
}

void PrintSumResult(float total)
{
	cout << "\nThe result of the summation is: " << fixed << setprecision(2) << total << endl;
}
