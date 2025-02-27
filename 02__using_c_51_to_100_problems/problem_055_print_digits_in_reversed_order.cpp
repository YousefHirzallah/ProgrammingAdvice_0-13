#include <iostream>
#include<string>
using namespace std;
string readnumper()
{
	string digits;
	cout << "enter the digits : ";
	cin >> digits;
	return digits;

}
void print_reversed_digits(string digits)
{

	for (int i = digits.length();i >= 0;i--)
	{
		cout << digits[i] << endl;
	}
}
int main()
{
	print_reversed_digits(readnumper());
}