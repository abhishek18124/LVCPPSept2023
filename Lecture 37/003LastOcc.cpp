#include<iostream>

using namespace std;

int f(int X[], int t, int i) {

	// base case

	if (i == -1) {
		// find the index of last occurrence of the 't' in X[0...-1] = {}
		return -1;
	}

	// recursive case

	// find the index of last occurrence of the 't' in X[0...i]

	if (X[i] == t) {

		// you've found the index of last occ. of 't'

		return i;

	}

	// recursively, find the index of last occurrence of the 't' in X[0...i-1]

	return f(X, t, i - 1);
}

int main() {

	int X[] = {10, 20, 30, 20, 30};
	int n = sizeof(X) / sizeof(int);
	int t = 40;

	cout << f(X, t, n - 1) << endl;

	return 0;
}