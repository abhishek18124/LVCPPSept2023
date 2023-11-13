#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {

	int sr = sqrt(n);

	for (int i = 2; i <= sr; i++) {

		if (n % i == 0) {

			// you've found a factor of 'n' in the range [2, sr]

			return false;

		}

	}

	// you did not find any factor of 'n' in the range [2, sr]

	return true;

}

void printPrimes(int m) {

	for (int n = 2; n <= m; n++) {

		if (isPrime(n)) {
			cout << n << endl;
		}

	}

}

int main() {

	int m;
	cout << "Enter the value of m : ";
	cin >> m;

	printPrimes(m);

	return 0;
}