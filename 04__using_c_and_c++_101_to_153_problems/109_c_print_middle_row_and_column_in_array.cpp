#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int randoomNum(int from , int to) {
	int randNum;
	randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void  fillMatrixWithRandomNumbers(int arrMatrix[3][3], int row, int cols) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			arrMatrix[i][j] =randoomNum(1,10);


		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{

			printf("%0*d     ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

void rowMatrix(int arrMatrix[3][3], int arrRow[3], int row, int cols) {
	for (short i = 1; i <= row; i++)
	{
		for (short j = 0; j < cols; j++)
		{

			arrRow[j] = arrMatrix[i][j];
		}

	}
}
void colMatrix(int arrMatrix[3][3], int arrCol[3], int row, int cols) {
	for (short i = 1; i <= cols; i++)
	{
		for (short j = 0; j < row; j++)
		{

			arrCol[j] = arrMatrix[j][i];
		}

	}
}
void fillMatrixWithOneRowOrCol(int arrMatrix[3][3], int arrRow[3],int arrCol[3],  int length) {

	rowMatrix(arrMatrix, arrRow, 1,3);
	colMatrix(arrMatrix, arrCol, 3,1);

}
void PrintOneLine(int arr[3], int length) {
	for (int i = 0; i < length; i++) {
		printf("%0*d     ", 2, arr[i]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arrMatrix[3][3] , arrRow[3],arrCol[3];

	fillMatrixWithRandomNumbers(arrMatrix, 3, 3);
	cout << "\nThe following is a 3x3 random matrix1:\n";
	PrintMatrix(arrMatrix, 3, 3);

	fillMatrixWithOneRowOrCol(arrMatrix, arrRow, arrCol, 3);
	cout << "\nRow Line\n";
	PrintOneLine(arrRow, 3);
	cout << "\nCol Line\n";
	PrintOneLine(arrCol, 3);

	return 0;
}