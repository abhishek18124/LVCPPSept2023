// n <= 100
#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	// n-steps
	// n space due to r[]

	int r[100];

	r[n - 1] = h[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		r[i] = max(r[i + 1], h[i]);
	}

	// n-steps

	int total = 0; // to store the total amount of rainwater trapped b/w the buildings

	int li = 0;

	for (int i = 0; i < n; i++) {

		// compute the amount of rainwater trapped on top of the ith building i.e. wi

		li = max(li, h[i]); // li : (0 to i)max

		int wi = min(li, r[i]) - h[i];

		total += wi;

	}

	// total steps = n+n = 2n ~ O(n)

	// total space = n due r[] ~ O(n)

	cout << total << endl;

	return 0;
}