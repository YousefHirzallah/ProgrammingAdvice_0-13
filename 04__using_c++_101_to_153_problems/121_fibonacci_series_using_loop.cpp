#include <iostream>
using namespace std;


void ReadFibonaciSereis()
{
	int Prev1 = 1;
	int Prev2 = 1;
	int Current = 0;

	cout << Prev1 << " " << Prev2 << " ";
	for (int i = 0; i < 8; i++)
	{
		Current = Prev1 + Prev2;


		Prev1 = Prev2;
		Prev2 = Current;

		cout << Current << " ";
	}

}

int main()
{

	ReadFibonaciSereis();
}