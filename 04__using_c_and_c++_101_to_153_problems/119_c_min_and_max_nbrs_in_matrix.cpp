#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillArrayWithRandNum(int arr[3][3], int Rows, int Colms)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Colms)
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

void ShowTheMinmiumAndMaxiumNumberInArray(int arr[3][3], int Rows, int Colms)
{
	int TheBigger = arr[0][0];
	short TheSmaller = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			if (arr[i][j] > TheBigger)
				TheBigger = arr[i][j];
			if (arr[i][j] < TheSmaller)
			{
				TheSmaller = arr[i][j];
			}

		}

	}
	cout << "The Bigger Number is " << TheBigger << endl;
	cout << "The Smaller Number is " << TheSmaller << endl;

}



int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillArrayWithRandNum(Matrix1, 3, 3);


	cout << "Matrix 1 is \n"; PrintMatrix(Matrix1, 3, 3);
	ShowTheMinmiumAndMaxiumNumberInArray(Matrix1, 3, 3);

}