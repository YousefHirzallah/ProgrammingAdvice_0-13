#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillarraywithrandomnumber(int arr[3][3], int rows, int columns)
{
	for (short i = 0;i < rows;i++)
	{
		for (short j = 0;j < columns;j++)
		{
			arr[i][j] = RandomNumber(1, 100);

		}
	}
}
void printarray(int arr[3][3], int rows, int columns)
{
	cout << "array after fill with random number = " << "\n\n";
	for (short i = 0;i < rows;i++)
	{
		for (short j = 0;j < columns;j++)
		{
			cout << setw(3) << arr[i][j] << "    ";

		}
		cout << "\n";
	}
}
int getsumofcolumn(int arr[3][3], int rows, int column)
{
	int sum = 0;
	for (int i = 0;i < rows;i++)
	{
		sum += arr[i][column];
	}
	return sum;
}
void printcolumns(int arr[3][3], int rows, int columns)
{
	for (int x = 0;x < columns;x++)
	{
		cout << "sum of column [" << x + 1 << "] = " << getsumofcolumn(arr, rows, x)<<endl;
	}
}
int main()
{
	int sum1, sum2;
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr2[3];
	fillarraywithrandomnumber(arr, 3, 3);
	printarray(arr, 3, 3);
	printcolumns(arr, 3, 3);

	return 0;
}