#include<iostream>
#include<vector>

using namespace std;

vector<int> v;

void f(int X[], int n, int t, int i) {

	// base case

	if (i == n) {

		return;

	}

	// recursive case

	if (X[i] == t) {
		v.push_back(i);
	}

	f(X, n, t, i + 1);

}

int main() {

	int X[] = {10, 20, 30, 20, 30};
	int n = sizeof(X) / sizeof(int);
	int t = 10;

	f(X, n, t, 0);

	if (v.empty()) {

		// you did not find any occurrences of the 't' in X[]

		cout << -1 << endl;

	} else {

		for (int idx : v) {
			cout << idx << " ";
		}

		cout << endl;


	}

	return 0;
}