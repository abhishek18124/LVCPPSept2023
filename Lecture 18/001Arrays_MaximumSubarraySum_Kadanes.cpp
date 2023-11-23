// constraints : n <= 100

#include<iostream>

using namespace std;

// time : O(n)
// space : O(n)

int f1(int arr[], int n) {

	int x[100];

	x[0] = arr[0];
	int maxSoFar = x[0];

	for (int i = 1; i < n; i++) {

		x[i] = max(x[i - 1] + arr[i], arr[i]);
		maxSoFar = max(maxSoFar, x[i]);

	}

	return maxSoFar;

}

// time : O(n)
// space : O(1)

int f2(int arr[], int n) {

	int x;

	x = arr[0]; // intially, x denotes x[0]
	int maxSoFar = x;

	for (int i = 1; i < n; i++) {

		x = max(x + arr[i], arr[i]);
		maxSoFar = max(maxSoFar, x);

	}

	return maxSoFar;

}


int main() {

	// int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int arr[] = { -3, 2, -1, 4, -5};
	int n = sizeof(arr) / sizeof(int);

	cout << f2(arr, n) << endl;

	return 0;
}