// constrains : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 6, 5, 2, 4, 3};
	int n = sizeof(arr) / sizeof(int);

	// time : O(n)
	// space : O(n)

	int csum[101];

	csum[0] = 0;

	for (int i = 1; i <= n; i++) {
		csum[i] = csum[i - 1] + arr[i - 1];
	}

	// time : O(n^2)

	int cnt = 0; // to track the no. of good subarrays

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {

			int sij = csum[j + 1] - csum[i];
			if (sij % n == 0) {

				// arr[i...j] is a good subarray

				cnt++;

			}

		}
	}

	// overall time : n + n^2 ~ O(n^2)
	// space : O(n) due csum[]

	cout << cnt << endl;

	return 0;
}