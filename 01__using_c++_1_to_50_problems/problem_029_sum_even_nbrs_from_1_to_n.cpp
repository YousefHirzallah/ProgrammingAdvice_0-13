#include <iostream>
using namespace std;

void readNumber(int& n) {
    cout << "Enter a number: ";
    cin >> n;
}

void printSumOfEvenNumbers(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << "\n";
}

int main() {
    int n;

    readNumber(n);
    printSumOfEvenNumbers(n);

    return 0;
}
