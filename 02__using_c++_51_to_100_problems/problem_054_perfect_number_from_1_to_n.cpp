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
void PrintPerfectFrom1toN(int Num)
{
	cout << "Perfect Numbers from 1 to " << Num << " are:" << endl;

	for (int Counter = 1; Counter <= Num; Counter++) {

		if (CheckPerfectNumber(Counter) == enPerfectNum::Perfect)
		{
			cout << Counter << endl;
		}
	}
}

int main()
{
	int Num;
	readNum(Num);
	PrintPerfectFrom1toN(Num);

	return 0;
}