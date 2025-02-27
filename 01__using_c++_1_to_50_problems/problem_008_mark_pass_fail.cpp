#include <iostream>

using namespace std;

enum class e_pass_fail
{
	pass = 1,
	fail = 2
};

int ReadMark();
e_pass_fail CheckMark(int i_entered_mark);
void PrintMarkResult(int i_entered_mark);

int main()
{
	int entered_mark = ReadMark();
	PrintMarkResult(entered_mark);
}

int ReadMark()
{
	int i_entered_mark;
	cout << "Please enter your mark: ";
	cin >> i_entered_mark;
	return i_entered_mark;
}

e_pass_fail CheckMark(int i_entered_mark)
{
	if (i_entered_mark >= 50)
		return e_pass_fail::pass;
	else
		return e_pass_fail::fail;
}

void PrintMarkResult(int i_entered_mark)
{
	if (CheckMark(i_entered_mark) == e_pass_fail::pass)
		cout << "Congratulations; you passed!" << endl;
	else
		cout << "Unfortunately; you failed :(" << endl;
}
