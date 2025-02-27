#include <iostream>
#include<iomanip>
using namespace std;

void fillOrderedMatrix(int matrix[3][3], short rows, short cols) {
	int number = 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0 ; j < cols; j++) {
			matrix[i][j] = number;
			number++;
		}
	}
}


void switchEachRowToColumn(int matrix[3][3], int switchedMatrix[3][3], short rows, short cols) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			switchedMatrix[j][i] = matrix[i][j];
		}


	}
}
void printOrderdMatrix(int matrix[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << setw(3) << matrix[i][j] << "    ";
		}
		cout << "\n\n";
	}

}
int main()
{
	int matrix[3][3], switchedMatrix[3][3];
	fillOrderedMatrix(matrix, 3, 3);
	cout << "The following is 3x3 ordered matrix\n\n";
	printOrderdMatrix(matrix, 3, 3);
	cout << "\n\n\n";
	cout << "The following is 3x3 transposed matrix:\n\n";
	switchEachRowToColumn(matrix, switchedMatrix, 3, 3);
	printOrderdMatrix(switchedMatrix, 3, 3);
}