#include<iostream>

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50};
	int n = 5;

	// cout << A[0] << endl;
	// cout << A[1] << endl;
	// cout << A[2] << endl;
	// cout << A[3] << endl;
	// cout << A[4] << endl;

	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	}

	// int i = 0;
	// while (i < n) {
	// 	cout << A[i] << endl;
	// 	i++;
	// }
	// cout << endl;

	int B[] = {100, 200, 300, 400, 500, 600};
	// cout << sizeof(B) << endl;
	int m = sizeof(B) / sizeof(int);

	for (int i = 0; i < m; i++) {
		cout << B[i] << " ";
	}

	cout << endl;


	return 0;
}