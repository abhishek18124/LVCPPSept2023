#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int i = 2;

	while (i * i <= n) { // i <= sqrt(n)

		// check if 'i' is a factor of 'n'

		if (n % i == 0) {

			cout << "not prime" << endl;
			break;
			// return 0;

		}

		i = i + 1;

	}

	if (i * i > n) {
		cout << "prime" << endl;
	}

	return 0;
}