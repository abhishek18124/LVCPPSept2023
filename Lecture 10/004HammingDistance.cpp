#include<iostream>

using namespace std;

int main() {

	int n = 67;
	int m = 66;

	int xorRes = n ^ m;

	// hamming distance b/w n and m is equal to the number of set bits in xorRes

	int cnt = 0; // to track the hamming distance

	while (xorRes > 0) {

		cnt++;
		xorRes = xorRes & (xorRes - 1); // this ensures you iterate over just the set bits of xorRes

	}

	cout << cnt << endl;

	return 0;
}