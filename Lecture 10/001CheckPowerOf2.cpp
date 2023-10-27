#include<iostream>

using namespace std;

int main() {

	int n = 32;

	if ((n & (n - 1)) == 0) {
		cout << n << " is a power of 2" << endl;
	} else {
		cout << n << " is not a power of 2" << endl;
	}

	return 0;
}