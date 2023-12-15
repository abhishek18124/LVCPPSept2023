#include<iostream>

using namespace std;

int main() {

	int mat[][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};

	int m = 3;
	int n = 3;


	for (int j = 0; j < n; j++) {

		// print the values in the jth column

		if (j % 2 == 0) {

			// print the values in the even column j in top-down order

			for (int i = 0; i < m; i++) {

				cout << mat[i][j] << " ";

			}

		} else {

			// print the values in the odd column j in bottom-up order

			for (int i = m - 1; i >= 0; i--) {

				cout << mat[i][j] << " ";

			}

		}


	}

	cout << endl;


	return 0;
}