#include<iostream>

using namespace std;

int main() {

	int n = 12;
	int k = 0;

	int mask = 1 << k;

	if ((n & mask) == 0) {
		// kth bit of 'n' is not set
		cout << "false" << endl;
	} else { // (n&mask) -> 2^k (+ve)
		// kth bit of 'n' is set
		cout << "true" << endl;
	}

	if (((n >> k) & 1) == 0) {
		// kth bit of 'n' is not set
		cout << "false" << endl;
	} else { // ((n >> k) & 1) -> 1
		// kth bit of 'n' is set
		cout << "true" << endl;
	}

	return 0;
}