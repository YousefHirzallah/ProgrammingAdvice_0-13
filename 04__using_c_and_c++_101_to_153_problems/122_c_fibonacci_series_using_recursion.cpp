#include<iostream>
using namespace std;

short t1 = 0, t2 = 1;
short f = 1;

int readnumber(string message)
{
	int number;
	do
	{
		cout <<  message;
		cin >> number;
	} while (number <= 0);
	return number;
}
void printfibonacci(short num)
{
	if ( num>0)
	{
		f = t1 + t2;
		cout << f << "   ";
		t1 = t2;
		t2 = f;
		printfibonacci(num-1);
	}
}
int main()
{
	int num = readnumber("pleae enter apositive number ");
	printfibonacci(num);
	system("pause>0");
	return 0;
}