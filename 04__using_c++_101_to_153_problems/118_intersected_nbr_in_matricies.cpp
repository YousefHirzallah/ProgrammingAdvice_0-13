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
			arr[i][j] = RandomNumber(1, 25);
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
	cout << "\n\n";
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
void Check2Array(int arr[3][3],int arr2[3][3], int Rows, int Colms)
{
for(short i=0;i<Rows;i++)
  for(short j=0;j<Colms;j++)
    if(TheNumberInArray(arr,Rows,Colms,arr2[i][j]))
		cout<<arr2[i][j]<<" ";
}

int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomArray(Matrix1, 3, 3);
	FillMatrixWithRandomArray(Matrix2, 3, 3);
	cout << "Matirx 1\n";
	PrintArrayMatrix(Matrix1, 3, 3);
	cout << "Matrix 2 \n";
	PrintArrayMatrix(Matrix2, 3, 3);

	cout << "The Smillar Between Arrays is \n";
	Check2Array(Matrix1, Matrix2, 3, 3);


	return 0;
}