#include<iostream>

using namespace std;

bool flag = false; // assume 't' is not present in X[]

void f(int X[], int n, int t, int i) {

	// base case

	if (i == n) {

		if (flag == false) {

			// you did not find any occurrences of 't' in X[]

			cout << -1 << endl;

		}

		return;

	}

	// recursive case

	if (X[i] == t) {
		flag = true;
		cout << i << " ";

	}

	f(X, n, t, i + 1);

}

int main() {

	int X[] = {10, 20, 30, 20, 30};
	int n = sizeof(X) / sizeof(int);
	int t = 100;

	f(X, n, t, 0);

	return 0;
}