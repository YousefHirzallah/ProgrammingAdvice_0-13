#include <iostream>
#include <cmath>

using namespace std;

float CalculateCircleArea(float sideLength);
void ReadSquareSideLength(float &sideLength);

int main()
{
	float sideLength;

	ReadSquareSideLength(sideLength);
	float area = CalculateCircleArea(sideLength);
	cout << "The Area of the circle which is inscribed in square is: " << fixed << setprecision(3) << area << endl;

	return 0;
}

void ReadSquareSideLength(float &sideLength)
{
	cout << "Please enter the side length of the square that inscribes the circle: ";
	cin >> sideLength;
}

float CalculateCircleArea(float sideLength)
{
	return M_PI * pow((sideLength / 2), 2);
}
