#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillarraywithRandomnumber(int arr[3][3], short rows, short column)
{
	for (int i = 0; i < rows; i++)
	{
		for (int x = 0; x < column; x++)
		{
			arr[i][x] = RandomNumber(1, 10);
		}
	}

}
void printarray(int arr[3][3], short column, short rows)
{
	for (short i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			printf(" %0*d ", 2, arr[i][z]);
		}
		cout << "\n";
	}
}
bool compare(int arr1[3][3], int column, int rows)
{
	int x = arr1[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			if (i==z && arr1[i][z]!=x)
			{
				return 0;
			}
			if (i != z && arr1[i][z] != 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
;
	fillarraywithRandomnumber(arr, 3, 3);

	cout << "matrix 1 = \n\n";
	printarray(arr, 3, 3);
	cout << "\n";
	if (compare(arr, 3, 3))
	{
		cout << "\nyes it is scalar matrix :-) ";
		system("color 1F");
	}
	else
	{
		cout << "\n no it is not scaler matrix :-(";
		system("color 6F");
	}
	cout << "\npleae enter aney key to ontinue ";
	system("pause>0");
	system("clear");
	return 0;
}