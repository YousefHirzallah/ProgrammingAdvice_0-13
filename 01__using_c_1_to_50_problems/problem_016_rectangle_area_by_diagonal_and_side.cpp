#include <iostream>
#include <cmath>

using namespace std;

float CalculateRectangleArea(float diagonal, float side);
void ReadDiagonalAndSide(float &diagonal, float &side);

int main()
{
	float diagonal, side;

	ReadDiagonalAndSide(diagonal, side);
	cout << "The rectangle area is: " << fixed << setprecision(2) << CalculateRectangleArea(diagonal, side) << endl;

	return 0;
}

void ReadDiagonalAndSide(float &diagonal, float &side)
{
	cout << "Please enter the diagonal: ";
	cin >> diagonal;
	cout << "Please enter the side: ";
	cin >> side;
}

float CalculateRectangleArea(float diagonal, float side)
{
	return sqrt(pow(diagonal, 2) - pow(side, 2)) * side;
}
