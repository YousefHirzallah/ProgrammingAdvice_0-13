#include <iostream>
using namespace std;
bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 ==
	0);
}
short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year to check? ";
	cin >> Year;
	return Year;
}
int main()
{
	short Year = ReadYear();
	if (isLeapYear(Year))
		cout << "\nYes, Year [" << Year << "] is a leap year.\n";
	else
		cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";
		system("pause>0");
	return 0;
}