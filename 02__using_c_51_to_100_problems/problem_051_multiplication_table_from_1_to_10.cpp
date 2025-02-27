#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void PrintAddress()
{
	cout << "\t\t Mulitplication From 1 To 10 \t\t" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t " << i ;
	}
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;

}
void FullArray(int arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
}
void PrintArray(int arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1;
		if (i != 9)
			cout << "    |";
		else cout << "   |";
		for (int j = 0; j < 10; j++)
		{
			cout  <<"\t "<<arr[i][j];
		}

		cout << endl;
	}

}
int main()
{
	int arr[10][10];
	PrintAddress();
	FullArray(arr);
	PrintArray(arr);
	return 0;
}