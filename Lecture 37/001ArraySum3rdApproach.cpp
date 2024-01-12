#include<iostream>

using namespace std;

int f(int X[], int s, int e) {

	// base case

	// if (s == e) {
	// 	// find the sum of X[s...s] / X[e...e]
	// 	return X[s]; // X[e]
	// }

	if (s > e) {
		return 0;
	}

	// recursive case

	// find the sum of X[s...e]

	int m = s + (e - s) / 2;

	// 1. ask your friend to compute the sum of X[s...m]

	int A = f(X, s, m);

	// 2. ask your friend to compute the sum of X[m+1...e]

	int B = f(X, m + 1, e);

	return A + B;

}

int main() {

	int X[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(X) / sizeof(int);

	cout << f(X, 0, n - 1) << endl;

	return 0;
}