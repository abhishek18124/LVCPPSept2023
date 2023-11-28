// n <= 100
#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	int i = 0;
	int j = n - 1;

	int l = 0; // or INT_MIN or h[0]   : max(0 to i)
	int r = 0; // or INT_MIN or h[n-1] : max(j to n-1)

	// time : O(n)
	// space : O(1)

	int total = 0; // to store the total amount of rainwater trapped b/w the buildings

	while (i <= j) {

		l = max(l, h[i]); // l = max(0 to i)
		r = max(r, h[j]); // r = max(j to n-1)

		if (l < r) {

			// compute the amount of rainwater trapped on top of the ith buidling

			int wi = l - h[i];
			total += wi;
			i++;

		} else {

			// compute the amount of rainwater trapped on top of the jth buidling

			int wj = r - h[j];
			total += wj;
			j--;

		}

	}

	cout << total << endl;

	return 0;
}