#include <iostream>
#include <cmath>

using namespace std;

float CalculateTriangleArea(float base, float side);
void ReadTriangleBaseAndSides(float &base, float &side);

int main() {
	float base, side;
	ReadTriangleBaseAndSides(base, side);
	float area = CalculateTriangleArea(base, side);
	cout << "The triangle area is: " << area << endl;
	return 0;
}

float CalculateTriangleArea(float base, float side) {
	return M_PI * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
}

void ReadTriangleBaseAndSides(float &base, float &side) {
	cout << "Please enter the triangle base length: ";
	cin >> base;
	cout << "Please enter the triangle side length: ";
	cin >> side;
}
