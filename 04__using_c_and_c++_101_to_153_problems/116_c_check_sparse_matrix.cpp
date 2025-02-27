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
			arr[i][x] = RandomNumber(0, 10);
		}
	}

}
void printarray(int arr[3][3], short column, short rows)
{
	for (short i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			cout<<setw(3)<<arr[i][z]<<"   ";
		}
		cout << "\n";
	}
}
int count1(int arr1[3][3],short rows,short column)
{
	int Counter=0;
	for (int i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			if (arr1[i][z] == 0)
			{
				Counter++;
			}
		}
	}
	return Counter;
}
int count2(int arr1[3][3], short rows, short column)
{
  int Counter=0;
	for (int i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			if (arr1[i][z] != 0)
			{
				Counter++;
			}
		}
	}
	return Counter;
}
bool compare(int arr1[3][3], int column, int rows)
{
	return(count1(arr1, rows, column) > count2(arr1, rows, column));
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	fillarraywithRandomnumber(arr, 3, 3);
	cout << "matrix 1 = \n\n";
	printarray(arr, 3, 3);
	cout << "\n";
	if (compare(arr, 3, 3))
	{
		cout << "\nyes it is sparse matrix :-) ";
		system("color 1F");
	}
	else
	{
		cout << "\n no it is not sparse matrix :-(";
		system("color 6F");
	}

	return 0;
}