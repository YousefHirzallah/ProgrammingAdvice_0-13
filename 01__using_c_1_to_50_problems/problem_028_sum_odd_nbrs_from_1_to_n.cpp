#include <iostream>
using namespace std;

void readNumber(int& n) {
	cout << "Enter a number: ";
	cin >> n;
}

void printSumOfOddNumbers(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i += 2) {
		sum += i;
	}
	cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << "\n";
}

int main() {
	int n;

	readNumber(n);
	printSumOfOddNumbers(n);

	return 0;
}
