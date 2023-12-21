#include<iostream>

using namespace std;

void read(int (*arr)[4], int m, int n) { // int arr[][4]
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}

void print(int (*arr)[4], int m, int n) { // int arr[][4]
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {

	int arr[3][4];

	int m = 3;
	int n = 4;

	read(arr, m, n);

	print(arr, m, n);

	return 0;
}