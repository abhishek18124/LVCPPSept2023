#include<iostream>

using namespace std;

int f(int X[], int n, int i) {

	// base case

	if (i == n) {

		// find the sum(X[n...n-1]) i.e. sum({})
		return 0;

	}

	// recursive case

	// find the sum(X[i...n-1]) i.e. find the sum of suffix of X[] starting at the ith index

	return X[i] + f(X, n, i + 1);

}

int main() {

	int X[] = {10, 20, 30, 40, 50};
	int n = sizeof(X) / sizeof(int);

	cout << f(X, n, 0) << endl;

	return 0;
}