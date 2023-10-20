#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int squareRoot = 0;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 1;
	}

	squareRoot = squareRoot - 1;

	cout << squareRoot << endl;

	return 0;
}