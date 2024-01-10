#include<iostream>

using namespace std;

int f(int X[], int i) {

	// base case

	// if (i == 0) {

	// 	// find the sum(X[0...0]) i.e. sum({X[0]})
	// 	return X[0];

	// }


	if (i == -1) {

		// find the sum(X[0...-1]) i.e. sum({})
		return 0;

	}

	// recursive case

	// find the sum(X[0...i]) i.e. find the sum of prefix of X[] ending at the ith index

	return f(X, i - 1) + X[i];

}

int main() {

	int X[] = {10, 20, 30, 40, 50};
	int n = sizeof(X) / sizeof(int);

	cout << f(X, n - 1) << endl;

	return 0;
}