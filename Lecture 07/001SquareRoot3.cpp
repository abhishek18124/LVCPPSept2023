#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int p;
	cin >> p;

	float squareRoot = 0;

	float inc = 1;

	int i = 1;

	while (i <= p + 1) {

		while (squareRoot * squareRoot <= n) {
			squareRoot = squareRoot + inc;
		}

		squareRoot = squareRoot - inc;
		inc = inc / 10;
		i = i + 1;

	}

	cout << squareRoot << endl;

	return 0;
}