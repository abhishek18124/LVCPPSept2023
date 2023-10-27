#include<iostream>

using namespace std;

int main() {

	int n = 256;

	int mask1 = n - 1;
	int mask2 = 0xAAAAAAAA;

	if (((n & mask1) == 0) and ((n & mask2) == 0)) {
		cout << n << " is a power of 4" << endl;
	} else {
		cout << n << " is not a power of 4" << endl;
	}

	return 0;
}