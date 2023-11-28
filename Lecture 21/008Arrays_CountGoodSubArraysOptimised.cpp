// constrains : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 6, 5, 2, 4, 3};
	int n = sizeof(arr) / sizeof(int);

	int freq[100];

	memset(freq, 0, sizeof(freq)); // init freq[] with 0

	// n-steps to build freq[]

	freq[0] = 1;

	int csum = 0;

	for (int i = 0; i < n; i++) {

		csum += arr[i];
		freq[((csum % n) + n) % n]++;

	}

	// for (int i = 0; i < n; i++) {
	// 	cout << freq[i] << " ";
	// }

	// cout << endl;


	// n-steps to cnt using freq[]

	int cnt = 0;

	for (int i = 0; i < n; i++) {

		int xi = freq[i];
		if (xi >= 2) {

			// 'i' will contribute to the cnt of good subarray

			cnt += (xi * (xi - 1)) / 2;

		}

	}

	// total steps = n+n = 2n ~ O(n)
	// total space = n due to freq[] ~ O(n)

	cout << cnt << endl;

	return 0;
}