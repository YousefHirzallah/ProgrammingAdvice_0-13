#include <iostream>
#include <limits>

using namespace std;

int GetGrade() {
	int grade;
	while (true) {
		cout << "Enter grade (0-100): ";
		cin >> grade;

		if (cin.fail() || grade < 0 || grade > 100) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input! Please try again.\n";
		} else {
			return grade;
		}
	}
}

void PrintGradeResult(int grade) {
	cout << "Grade: ";
	if (grade >= 90)       cout << "A";
	else if (grade >= 80)  cout << "B";
	else if (grade >= 70)  cout << "C";
	else if (grade >= 60)  cout << "D";
	else if (grade >= 50)  cout << "E";
	else                   cout << "F";
	cout << endl;
}

int main() {
	int grade = GetGrade();
	PrintGradeResult(grade);
	return 0;
}