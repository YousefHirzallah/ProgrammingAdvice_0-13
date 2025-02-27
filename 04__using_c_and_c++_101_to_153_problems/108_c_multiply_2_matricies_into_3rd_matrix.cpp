#include<iostream>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void fillarraywithRandomnumber(int arr[3][3], short rows, short column)
{
	for (int i = 0;i < rows;i++)
	{
		for (int x = 0;x < column;x++)
		{
			arr[i][x] = RandomNumber(1, 10);
		}
	}

}
void printarray(int arr[3][3], short rows, short column)
{
	for (int i = 0;i < rows;i++)
	{
		for (short z = 0;z < column;z++)
		{
			cout << setw(3) << arr[i][z] << "   ";
		}
		cout << endl;
	}
}
void multiplyarray(int arr1[3][3], int arr2[3][3], int arr3[3][3], int column,int rows)
{
	for (int i = 0;i < rows;i++)
	{
		for (int z = 0;z < column;z++)
		{
			arr3[i][z] = arr1[i][z] * arr2[i][z];
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr2[3][3];
	int arr3[3][3];
	fillarraywithRandomnumber(arr, 3, 3);
	fillarraywithRandomnumber(arr2, 3, 3);
	cout << "array 1 = \n\n ";
	printarray(arr, 3, 3);
	cout << "array 2  = \n\n";
	printarray(arr2, 3, 3);
	multiplyarray(arr, arr2, arr3, 3,3);
	cout << "array 3 after multyply = \n\n";
	printarray(arr3, 3, 3);
	system("pause>0");
	return 0;
}