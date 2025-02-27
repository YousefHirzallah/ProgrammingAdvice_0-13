#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillMatrixWithRandomArray(int arr[3][3], int Rows, int Colms)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintArrayMatrix(int arr[3][3], int Rows, int Colms)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

bool TheNumberInArray(int arr[3][3], int Rows, int Colms, int Number)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			if (arr[i][j] == Number)
			{
				return true;
			}
		}

	}
	return false;
}

int main()
{
	int arr[3][3], Number;
	FillMatrixWithRandomArray(arr, 3, 3);
	PrintArrayMatrix(arr, 3, 3);
	cout << "Please Enter The Number You Need to Search in Array?\n";
	cin >> Number;
	if (TheNumberInArray(arr, 3, 3, Number))
	{
		cout << "The Number " << Number << " Is In Array";
	}
	else
	{
		cout << "The Number " << Number << " Is Not In Array";
	}



}