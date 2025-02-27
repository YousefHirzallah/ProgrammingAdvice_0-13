#include<iostream>
using namespace std;

enum enPerfectNum { Perfect = 1, NotPerfect = 2 };

void readNum(int& Num)
{
	do
	{
		cout << "Please Enter The Number ?" << endl;
		cin >> Num;
	} while (Num <=0);
}

enPerfectNum CheckPerfectNumber(int Num)
{
	int Sum = 0;
	int Counter = 1;
	while (Counter <= Num/2)
	{
		if (Num % Counter == 0)
		{
			Sum = Sum + Counter;
		}
		Counter++;
	}

	if (Sum == Num)
		return enPerfectNum::Perfect;
	else
		return enPerfectNum::NotPerfect;
}
void PrintResult(int Num)
{
	if (CheckPerfectNumber(Num) == enPerfectNum::Perfect)
		cout << "\nThe Number " << Num << " Is Perfect\n";
	else
		cout << "\nThe Number " << Num << " Isn't Perfect\n";
}
int main()
{
	int Num;
	readNum(Num);
	PrintResult(Num);

	return 0;