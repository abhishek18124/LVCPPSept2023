// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	int csum[101];
	csum[0] = 0;

	// n-steps to compute csum[]
	// we need to create csum[] which need (n+1) ~ n amount of extra space

	for (int i = 1; i <= n; i++) {
		csum[i] = csum[i - 1] + arr[i - 1];
	}

	// for (int i = 0; i <= n; i++) {
	// 	cout << csum[i] << " ";
	// }

	// cout << endl;

	// ~n^2 steps to compute maximum subarray sum

	int lsf = INT_MIN;

	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			// compute the sum of the subarray that starts at the ith index and ends at the jth index

			int sum = csum[j + 1] - csum[i]; // const time operation

			lsf = max(lsf, sum);

		}

	}

	cout << lsf << endl;

	// total steps = n + n^2 ~ O(n^2)

	// space : O(n)


	return 0;
}