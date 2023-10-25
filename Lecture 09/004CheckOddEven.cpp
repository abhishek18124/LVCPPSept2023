#include<iostream>

using namespace std;

int main() {

	int n = 11;

	if ((n & 1) == 0) {
		// 0th bit of 'n' is not set
		cout << n << " is even" << endl;
	} else { // n&1 -> 1
		// 0th bit of 'n' is set
		cout << n << " is odd" << endl;
	}

	return 0;
}