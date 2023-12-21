/*

	constraints :

	0 < m, n <= 10

*/

#include<iostream>
#include<algorithm>

using namespace std;

void sortDiagonal(int mat[][10], int m, int n, int i, int j) {

	// print the diagonal that starts at the (i, j)th index

	int diagonalLength = min(m - i, n - j);

	int arr[diagonalLength];
	for (int k = 0; k < diagonalLength; k++) {
		arr[k] = mat[i + k][j + k];
	}

	sort(arr, arr + diagonalLength); // [begin, end)

	for (int k = 0; k < diagonalLength; k++) {
		mat[i + k][j + k] = arr[k];
	}


}

void sortMatrix(int mat[][10], int m, int n) {

	for (int j = 0; j <= n - 1; j++) {

		// sort the diagonal that starts at (0, j)th index

		sortDiagonal(mat, m, n, 0, j);

	}

	for (int i = 1; i <= m - 1; i++) {

		// sort the diagonal that starts at (i, 0)th index

		sortDiagonal(mat, m, n, i, 0);

	}

}

int main() {

	int mat[][10] = {
		{50, 80, 20},
		{90, 10, 70},
		{60, 30, 40}
	};

	int m = 3;
	int n = 3;

	sortMatrix(mat, m, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}