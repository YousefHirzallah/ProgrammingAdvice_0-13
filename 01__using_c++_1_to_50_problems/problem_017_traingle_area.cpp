#include <iostream>

using namespace std;

float CalculateTriangleArea(float base, float height);
void ReadBaseAndHeight(float &base, float &height);

int main()
{
	float base, height;

	ReadBaseAndHeight(base, height);
	float area = CalculateTriangleArea(base, height);
	cout << "The Triangle Area is: " << fixed << setprecision(2) << area << endl;

	return 0;
}

void ReadBaseAndHeight(float &base, float &height)
{
	cout << "Please enter the base of the triangle: ";
	cin >> base;
	cout << "Please enter the height of the triangle: ";
	cin >> height;
}

float CalculateTriangleArea(float base, float height)
{
	return 0.5 * base * height;
}
