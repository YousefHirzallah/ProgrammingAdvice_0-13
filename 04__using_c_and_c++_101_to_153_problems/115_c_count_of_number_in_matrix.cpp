#include <iostream>
#include <cstdlib>
using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Colms)
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

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomArray(int arr[3][3], short Rows, short Colms)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0 || Number>10);

	return Number;
}

int CheckHowManyNumberRepetition(short TheNumber, int Matrix1[3][3], short Rows, short Colms)
{

	int Counter = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colms; j++)
		{
			if (Matrix1[i][j] == TheNumber)
			{
				Counter++;
			}
		}

	}
	return Counter;
}



int main()
{
	srand((unsigned)time(NULL));
	int Matrix[3][3];
	FillMatrixWithRandomArray(Matrix, 3, 3);
	cout << "Array is \n";
	PrintMatrix(Matrix, 3, 3);
	cout << CheckHowManyNumberRepetition(ReadPositiveNumber("Enter The Number You Need To Count in Matrix?"), Matrix, 3, 3);





	return 0;
}