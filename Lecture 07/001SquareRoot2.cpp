#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	float squareRoot = 0;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 1;
	}

	squareRoot = squareRoot - 1;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 0.1;
	}

	squareRoot = squareRoot - 0.1;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 0.01;
	}

	squareRoot = squareRoot - 0.01;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 0.001;
	}

	squareRoot = squareRoot - 0.001;

	cout << squareRoot << endl;

	return 0;
}