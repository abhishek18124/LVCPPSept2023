#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n = 15;
	int cnt = 0; // to track the no. of set bits in 'n'

	// for (int k = 0; k <= 31; k++) {

	// 	// check if the kth bit of 'n' is set or not

	// 	int mask = 1 << k;
	// 	if ((n & mask) > 0) { // or check if n & mask is equal to 2^k
	// 		// 'kth' bit of 'n' is set
	// 		cnt++;
	// 	}

	// }

	for (int k = 0; k < ceil(log2(n + 1)); k++) {

		// check if the kth bit of 'n' is set or not

		// int mask = 1 << k;
		// if ((n & mask) > 0) { // or check if n & mask is equal to 2^k
		// // 'kth' bit of 'n' is set
		// cnt++;
		// }

		if (((n >> k) & 1) == 1) {
			// 'kth' bit of 'n' is set
			cnt++;
		}

	}

	cout << cnt << endl;

	return 0;
}