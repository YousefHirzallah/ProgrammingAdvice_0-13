#include <stdio.h>

long long int factorial(int n);
void readNumber(int* n);

int main() {
	int n;

	readNumber(&n);
	printf("Factorial of %d is: %lld\n", n, factorial(n));

	return 0;
}

void readNumber(int* n) {
	printf("Enter a number: ");
	scanf("%d", n);
}

long long int factorial(int n) {
	long long int result = 1;
	for (int i = 1; i <= n; ++i) {
		result *= i;
	}
	return result;
}
