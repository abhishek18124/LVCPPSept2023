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

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	isPrime(n) ? cout << "prime" << endl : cout << "not a prime" << endl;

	return 0;
}