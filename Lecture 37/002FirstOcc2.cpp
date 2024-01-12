#include<iostream>

using namespace std;

int f(int X[], int n, int i, int t) {

	// base case

	if (i == n) {
		// find the index of 1st occurrence of the 't' in X[n...n-1] = {}
		return -1;
	}

	// recursive case

	// find the index of 1st occurrence of the 't' in X[i...n-1]

	if (X[i] == t) {

		// you've found the 1st occurrence of the 't' at index i

		return i;

	}

	// recursively, find the index of 1st occurrence of the 't' in X[i+1...n-1]

	return f(X, n, i + 1, t);

}

int main() {

	int X[] = {10, 20, 30, 10, 20};
	int n = sizeof(X) / sizeof(int);
	int t = 40;

	cout << f(X, n, 0, t) << endl;

	return 0;
}