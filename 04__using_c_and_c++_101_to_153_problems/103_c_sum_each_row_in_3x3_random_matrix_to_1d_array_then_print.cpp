#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillarraywithrandomnumber(int arr[3][3],int rows,int columns)
{
	for (short i = 0;i < rows;i++)
	{
		for (short j = 0;j < columns;j++)
		{
			arr[i][j] = RandomNumber(1, 100);

		}
	}
}
void printarray(int arr[3][3],int rows,int columns)
{
	cout << "array after fill with random number = " << "\n\n";
	for (short i = 0;i < rows;i++)
	{
		for (short j = 0;j < columns;j++)
		{
			cout << setw(3)<<arr[i][j]<<"    ";

		}
		cout << "\n";
	}
}
void sumofrowsandcolumns( int arr[3][3], int rows, int columns,int arr2[3])
{
	int sumR=0;
	cout << "sum of each row and columns " << "\n\n";
	for (short i = 0;i < rows;i++)
	{

		for (short j = 0;j < columns;j++)
		{
			sumR += arr[i][j];
		}
		arr2[i] = sumR;
	}
}
void printarray2(int arr[3], int rows)
{
	for (short i = 0;i < rows;i++)
	{
		cout << "sum of row [" << i + 1 << "] = " << arr[i] << endl;
	}
}
int main()
{
	int sum1, sum2;
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr2[3];
	fillarraywithrandomnumber(arr,3,3);
	printarray(arr,3,3);
	sumofrowsandcolumns(arr, 3, 3,arr2);
	printarray2(arr2, 3);
	return 0;
}