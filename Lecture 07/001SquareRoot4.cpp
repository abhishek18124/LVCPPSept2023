#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int p;
	cin >> p;

	float squareRoot = 0;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 1;
	}

	squareRoot = squareRoot - 1;

	float inc = 0.1;

	int i = 1;

	while (i <= p) {

		cout << ".";

		while (squareRoot * squareRoot <= n) {
			squareRoot = squareRoot + inc;
		}

		squareRoot = squareRoot - inc;
		inc = inc / 10;
		i = i + 1;

		// cout << ".";

	}

	cout << squareRoot << endl;

	return 0;
}