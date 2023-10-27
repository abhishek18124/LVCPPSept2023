#include<iostream>

using namespace std;

int main() {

	int a = 3;
	int n = 5;

	int res = 1;
	int wgt = a;

	while (n > 0) {

		int rightmostBit = n & 1;
		if (rightmostBit == 1) {
			res = res * wgt;
		}

		wgt = wgt * wgt;
		n = n >> 1;

	}

	cout << res << endl;

	return 0;
}