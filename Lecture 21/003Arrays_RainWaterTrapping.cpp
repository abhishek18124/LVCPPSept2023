#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	// time : O(n^2)

	int total = 0; // to store the total amount of rainwater trapped b/w the buildings

	for (int i = 0; i < n; i++) {

		// compute the amount of rainwater trapped on top of the ith building i.e. wi

		// li : max(0 to i)

		int li = h[i]; // assume h[i] is the tallest building in the range 0 to i

		for (int j = i - 1; j >= 0; j--) {
			li = max(li, h[j]);
		}

		// ri : max(i to n-1)

		int ri = h[i]; // assume h[i] is the tallest building in the range i to n-1

		for (int j = i + 1;  j <= n - 1; j++) {
			ri = max(ri, h[j]);
		}

		int wi = min(li, ri) - h[i];

		total += wi;

	}

	cout << total << endl;

	return 0;
}