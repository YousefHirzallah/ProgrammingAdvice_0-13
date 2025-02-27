#include<iostream>
#include<iomanip>
using namespace std;
void fillarray(int arr[3][3],short rows,short column)
{
	int z = 1;
	for (int i = 0;i < rows;i++)
	{
		for (int x = 0;x < column;x++)
		{
			arr[i][x] = z;
			z++;
		}
	}

}
void printarray(int arr[3][3], short rows, short column)
{
	for (int i = 0;i < rows;i++)
	{
		for (short z = 0;z < column;z++)
		{
			cout <<setw(3)<< arr[i][z] << "    ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[3][3];
	fillarray(arr,3,3);
	printarray(arr, 3, 3);
	return 0;
}