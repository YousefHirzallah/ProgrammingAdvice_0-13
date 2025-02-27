#include <iostream>
using namespace std;

void readNumber(int& n) {
	cout << "Enter a number: ";
	cin >> n;
}

void printNumbers(int n) {
	for (int i = 1; i <= n; ++i) {
		cout << i << " ";
	}
	cout << "\n";
}

int main() {
	int n;

	readNumber(n);
	printNumbers(n);

	return 0;
}
