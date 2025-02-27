#include <iostream>
#include <string>

using namespace std;

struct FullName {
	string firstName;
	string lastName;
};

void readFullName(FullName &fullName);
string getFullName(const FullName &fullName);

int main() {
	FullName fullName;
	readFullName(fullName);
	string fullNameStr = getFullName(fullName);
	cout << "Full name is: " << fullNameStr << endl;
	return 0;
}

void readFullName(FullName &fullName) {
	cout << "Please enter your first name: ";
	cin >> fullName.firstName;
	cout << "Please enter your last name: ";
	cin >> fullName.lastName;
}

string getFullName(const FullName &fullName) {
	return fullName.firstName + " " + fullName.lastName;
}
