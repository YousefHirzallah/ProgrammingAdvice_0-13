#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

float CalculateRectangleArea(float length, float width);
void PrintRectangleArea(float area);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		cout << "Error! Please enter the Length and the Width (Command-line Arguments) after the program name." << endl;
		return 1;
	}

	float length = stof(argv[1]);
	float width = stof(argv[2]);

	float area = CalculateRectangleArea(length, width);
	PrintRectangleArea(area);

	return 0;
}

float CalculateRectangleArea(float length, float width)
{
	return length * width;
}

void PrintRectangleArea(float area)
{
	cout << "Rectangle Area is: " << fixed << setprecision(3) << area << endl;
}
