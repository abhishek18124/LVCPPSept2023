#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int sum = 0; // to track the sum of digits of 'n'

	while (n > 0) { // n != 0

		// int d = n % 10;
		// sum = sum + d;

		// sum = sum + n % 10;
		sum = sum + (n % 10);
		n = n / 10;

	}

	cout << sum << endl;

	return 0;
}