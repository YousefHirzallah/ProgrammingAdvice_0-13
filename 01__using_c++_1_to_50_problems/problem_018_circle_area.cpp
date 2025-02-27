#include <iostream>
#include <cmath>

using namespace std;

float CalculateCircleArea(float radius);
void ReadCircleRadius(float &radius);

int main()
{
	float radius;

	ReadCircleRadius(radius);
	float area = CalculateCircleArea(radius);
	cout << "The Area of the circle is: " << fixed << setprecision(3) << area << endl;

	return 0;
}

void ReadCircleRadius(float &radius)
{
	cout << "Please enter the radius of the circle: ";
	cin >> radius;
}

float CalculateCircleArea(float radius)
{
	return pow(radius, 2) * M_PI;
}
