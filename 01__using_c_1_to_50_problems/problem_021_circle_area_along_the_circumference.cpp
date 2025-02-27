#include <iostream>
#include <cmath>

using namespace std;

float calculateCircleArea(float circumference);
void readCircumference(float &circumference);

int main() {
	float circumference, area;

	readCircumference(circumference);
	area = calculateCircleArea(circumference);
	cout << "The circle area is: " << fixed << setprecision(3) << area << endl;

	return 0;
}

void readCircumference(float &circumference) {
	cout << "Please enter the circumference: ";
	cin >> circumference;
}

float calculateCircleArea(float circumference) {
	return pow(circumference, 2) / (4 * M_PI);
}
