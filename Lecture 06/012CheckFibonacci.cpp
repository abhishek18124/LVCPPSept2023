#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	if (n == 0 || n == 1) {

		// n is either the 0th or 1st fibonacci number

		cout << n << endl;

		cout << "true" << endl;

	} else {

		int a = 0; // to store the 0th fib. no.
		int b = 1; // to store the 1st fib. no.

		int i = 2;

		while (true) {

			// genrate the next fibonacci number

			int c = a + b;

			if (c == n) {

				cout << i << endl;
				cout << "true" << endl;
				break;

			}

			if (c > n) {

				cout << "false" << endl;
				break;

			}

			// continue generating fibonacci numbers ( c < n )

			a = b;
			b = c;

			i = i + 1;

		}

	}

	return 0;
}