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
bool IsIdentityMatrix(int arr1[3][3],int column, int rows)
{
	for (short i = 0; i < rows; i++)
	{
		for (int z = 0; z < column; z++)
		{
			if (i==z&&arr1[i][z] !=1 )
			return 0;

            else if(i!=z&&arr1[i][z]!=0)
            return 0;
		}
	}
	return 1;
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

	if (IsIdentityMatrix(arr, 3, 3))
	{
		cout << "\ntrue it is an identity matrix\n :-) ";
		system("color 1F");
	}
	else
	{
		cout << "\n no it is not an identity matrix :-(";
		system("color 6F");
	}
	cout << "\npleae enter aney key to ontinue ";
	system("pause>0");
	system("clear");
	return 0;
}