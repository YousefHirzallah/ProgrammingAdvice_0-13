#include <iostream>
#include <iomanip>

using namespace std;

enum class e_pass_fail
{
	pass = 1,
	fail
};

void PrintAverageResult(float average);
void Read3Numbers(float &num1, float &num2, float &num3);
float CalculateAvgOf3Numbers(float num1, float num2, float num3);
e_pass_fail CheckAverage(float avg);

int main()
{
	float num1, num2, num3;

	Read3Numbers(num1, num2, num3);
	float average = CalculateAvgOf3Numbers(num1, num2, num3);
	PrintAverageResult(average);
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

float CalculateAvgOf3Numbers(float num1, float num2, float num3)
{
	return (num1 + num2 + num3) / 3.0f;
}

e_pass_fail CheckAverage(float avg)
{
	return (avg >= 50) ? e_pass_fail::pass : e_pass_fail::fail;
}

void PrintAverageResult(float average)
{
	cout << "\nThe average is: " << fixed << setprecision(2) << average << endl;
	if (CheckAverage(average) == e_pass_fail::pass)
		cout << "Congratulations; you passed!" << endl;
	else
		cout << "Unfortunately; you failed!" << endl;
}
