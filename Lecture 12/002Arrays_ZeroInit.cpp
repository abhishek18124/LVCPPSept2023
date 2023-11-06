#include<iostream>

using namespace std;

int main() {

	int A[5] = {10, 20, 30};

	for (int i = 0; i < 5; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	int B[5] = {};

	for (int i = 0; i < 5; i++) {
		cout << B[i] << " ";
	}

	cout << endl;

	int C[4];

	memset(C, 0, sizeof(C));

	for (int i = 0; i < 4; i++) {
		cout << C[i] << " ";
	}

	cout << endl;


	return 0;
}