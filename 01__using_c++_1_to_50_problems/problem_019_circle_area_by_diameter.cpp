#include <iostream>
#include <cmath>

using namespace std;

float CalculateCircleArea(float diameter);
void ReadCircleDiameter(float &diameter);

int main()
{
	float diameter;

	ReadCircleDiameter(diameter);
	float area = CalculateCircleArea(diameter);
	cout << "The Circle area is: " << fixed << setprecision(3) << area << endl;

	return 0;
}

void ReadCircleDiameter(float &diameter)
{
	cout << "Please enter the diameter of the circle: ";
	cin >> diameter;
}

float CalculateCircleArea(float diameter)
{
	return (M_PI * pow(diameter, 2)) / 4.0;
}
