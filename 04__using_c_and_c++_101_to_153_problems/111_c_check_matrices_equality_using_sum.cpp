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
int sumofarray(int arr[3][3], short column, short rows)
{
	int sum = 0;
	for (short i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			sum += arr[i][z];
		}
	}
	return sum;
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
bool compare(int arr1[3][3],int arr2[3][3], int column,int rows)
{
	return(sumofarray(arr1, column, rows) == sumofarray(arr2, column, rows));
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr2[3][3];
	fillarraywithRandomnumber(arr, 3, 3);
	fillarraywithRandomnumber(arr2, 3, 3);
	cout << "matrix 1 = \n\n";
	printarray(arr, 3, 3);
	cout << "\nmatrix 2 = \n\n";
	printarray(arr2, 3, 3);
	if (compare(arr, arr2, 3, 3))
	{
		cout << "\ntrue they are equal :-) ";
		system("color 1F");
	}
	else
	{
		cout << "\n no they arenot equal :-(";
		system("color 6F");
	}
	cout << "\npleae enter aney key to ontinue ";
	system("pause>0");
	system("clear");
	return 0;
}