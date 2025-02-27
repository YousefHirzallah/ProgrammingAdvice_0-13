#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
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
void sumofrowsandcolumns( int arr[3][3], int rows, int columns)
{
	int sumR=0,sumC=0;
	cout << "sum of each row and columns " << "\n\n";
	for (short i = 0;i < rows;i++)
	{
		
		for (short j = 0;j < columns;j++)
		{
			sumR += arr[i][j];
		}
		cout << "sum of row [" << i + 1 << "] = " << sumR << endl;
		sumR = 0;
	}
}
int main()
{
	int sum1, sum2;
	srand((unsigned)time(NULL));
	int arr[3][3];
	fillarraywithrandomnumber(arr,3,3);
	printarray(arr,3,3);
	sumofrowsandcolumns(arr, 3, 3);
	return 0;
}