#include <iostream>

void print_letters_from_a_to_z();

int main() {
	print_letters_from_a_to_z();
	return 0;
}

void print_letters_from_a_to_z() {
	char letter = 'A';
	while (letter <= 'Z') {
		std::cout << letter;
		letter++;
	}
	std::cout << std::endl;
}
