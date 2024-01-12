#include<iostream>

using namespace std;

bool isSorted(int X[], int n, int i) {

	// base case

	if (i == n - 1) {

		// check if X[n-1...n-1] = {X[n-1]} is sorted in strictly increasing order

		return true;

	}

	// recursive case

	// check if X[i...n-1] is sorted in strictly increasing order

	return X[i] < X[i + 1] and isSorted(X, n, i + 1);

}

int main() {

	int X[] = {10, 20, 30, 40, 50};
	int n = sizeof(X) / sizeof(int);

	isSorted(X, n, 0) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}