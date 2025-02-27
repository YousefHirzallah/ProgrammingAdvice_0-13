#include <iostream>
#include <cmath>

using namespace std;

float CalculateTriangleArea(float side1, float side2, float side3);
void ReadTriangleSides(float &side1, float &side2, float &side3);

int main() {
	float side1, side2, side3;


	ReadTriangleSides(side1, side2, side3);


	float area = CalculateTriangleArea(side1, side2, side3);


	cout << "The triangle area is: " << area << endl;

	return 0;
}

float CalculateTriangleArea(float side1, float side2, float side3) {

	float s = (side1 + side2 + side3) / 2;


	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

void ReadTriangleSides(float &side1, float &side2, float &side3) {

	cout << "Enter the 1st side length: ";
	cin >> side1;
	cout << "Enter the 2nd side length: ";
	cin >> side2;
	cout << "Enter the 3rd side length: ";
	cin >> side3;
}
