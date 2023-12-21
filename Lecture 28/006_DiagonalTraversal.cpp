/*

	constraints :

	0 < m, n <= 10

*/

#include<iostream>

using namespace std;

void printDiagonal(int mat[][10], int m, int n, int i, int j) {

	// print the diagonal that starts at the (i, j)th index

	int diagonalLength = min(m - i, n - j);

	for (int k = 0; k < diagonalLength; k++) {

		// cout << mat[i + k][j + k] << " ";

		cout << mat[i][j] << " ";

		i++;
		j++;

	}

	cout << endl;

}

void traverseMatrix(int mat[][10], int m, int n) {

	for (int j = 0; j <= n - 1; j++) {

		// print the diagonal that starts at (0, j)th index

		printDiagonal(mat, m, n, 0, j);

	}

	for (int i = 1; i <= m - 1; i++) {

		// print the diagonal that starts at (i, 0)th index

		printDiagonal(mat, m, n, i, 0);

	}

}

int main() {

	int mat[10][10] = {
		{11, 12, 13, 14},
		{15, 16, 17, 18},
		{19, 20, 21, 22}
	};

	int m = 3;
	int n = 4;

	traverseMatrix(mat, m, n);

	return 0;
}