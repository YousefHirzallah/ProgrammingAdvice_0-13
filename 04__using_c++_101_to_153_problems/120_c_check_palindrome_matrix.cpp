#include<iostream>
#include<iomanip>
using namespace std;
void print(int arr[3][3], int row, int cols)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}
bool IsPalindromeMatrix(int arr[3][3], int row, int cols)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols / 2; j++) {

			if (arr[i][j] != arr[i][cols - 1 - j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int arr[3][3] = { {10,20,10},{60,50,60 },{90,50,90} };
	print(arr, 3, 3);
	if (IsPalindromeMatrix(arr, 3, 3))
	{
		cout << "It is a Palindrome Matrix \n";
	}
	else
	{
		cout << "No it's not a PalindromeMatrix \n";
	}



	return 0;


}