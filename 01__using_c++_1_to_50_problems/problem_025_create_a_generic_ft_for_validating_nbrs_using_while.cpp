#include <iostream>

bool validateNumberInRange(int enteredNumber, int from, int to) {
    return enteredNumber >= from && enteredNumber <= to;
}

void readAge(int& age) {
    std::cout << "Please enter your age: ";
    std::cin >> age;
}

void readAgeUntilValid(int& age, int from, int to) {
    while (!validateNumberInRange(age, from, to)) {
        readAge(age);
    }
}

void printAgeResult(int age) {
    std::cout << "The age is " << age << " and it is Valid\n";
}

int main() {
    int age, from, to;

    std::cout << "Please enter age range:\nFrom: ";
    std::cin >> from;
    std::cout << "To: ";
    std::cin >> to;

    readAge(age);
    readAgeUntilValid(age, from, to);
    printAgeResult(age);

    return 0;
}
