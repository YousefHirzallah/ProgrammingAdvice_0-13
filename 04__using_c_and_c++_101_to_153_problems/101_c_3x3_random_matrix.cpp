#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
void fillarraywithrandomnumber(int arr[3][3])
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			arr[i][j] = RandomNumber(1, 100);

		}
	}
}
void printarray(int arr[3][3])
{
	cout << "array after fill with random number = " << "\n\n";
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << "\n";
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	fillarraywithrandomnumber(arr);
	printarray(arr);
	return 0;
}