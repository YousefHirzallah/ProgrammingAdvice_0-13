#include<iostream>
#include<string>

using namespace std;


void readNum(int& Num)
{
	do
	{
		cout << "Please Enter The Numbers ?" << endl;
		cin >> Num;
	} while (Num <= 0);

}


void PrintNumbersVerticallySum(int Num)
{
	string NumBerZ = to_string(Num);
	int Sum = 0;

	for (int X = NumBerZ.length() - 1; X >= 0; X--)
	{
		cout << NumBerZ[X] << endl;
		Sum += (NumBerZ[X] - '0');
	}
	cout << "The Sum : " << Sum << endl;
}


int main()
{
	int Num;
	readNum(Num);
	PrintNumbersVerticallySum(Num);
	return 0;
}