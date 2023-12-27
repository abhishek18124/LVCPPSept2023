
/*

	To find the square root of a number 'n', we have to find the
	largest integer 'm' which satisfies the condition m^2 <= n.

*/


#include<iostream>
#include<cmath>

using namespace std;

float computeKthRoot(int n, int p, int k) {

	// kth root of 'n' always lies between 0 and n

	int s = 0;
	int e = n;

	float kthRoot;

	while (s <= e) {
		int m = s + (e - s) / 2;
		if (pow(m, k) <= n) { // for kthRoot use pow(m, k)

			// 'm' can potentially be integer part the kthRoot of 'n'
			kthRoot = m;
			// since we want to find the largest integer 'm'
			// which satisfies the condition  pow(m,k) <= n  will
			// continue the search towards the right of 'm'
			// i.e. the search space reduces to [m+1, e].
			s = m + 1;
		} else {
			// 'm' cannot be the integer part of kthRoot of 'n' therfore
			// continue the search towards the left of 'm' i.e. the
			// search space reduces from [s, e] to [s, m-1].
			e = m - 1;
		}
	}

	float inc = 0.1;

	for (int i = 0; i < p; i++) {
		while (pow(kthRoot, k) <= n) { // for kth root use pow(kthRoot, k)
			kthRoot = kthRoot + inc;
		}
		kthRoot = kthRoot - inc;
		inc = inc / 10;
	}

	return kthRoot;
}

int main() {

	int n = 16;
	int p = 3;
	int k = 4;

	cout << computeKthRoot(n, p, k) << endl;

	return 0;
}