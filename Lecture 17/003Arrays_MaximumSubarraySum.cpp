#include<iostream>
#include<climits>

using namespace std;

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	int lsf = INT_MIN; // to track the maximum subarray sum

	// time : O(n^3)
	// space : O(1)

	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			// compute the sum of the subarray that starts at the ith index and ends at the jth index

			int sum = 0;

			for (int k = i; k <= j; k++) {

				sum += arr[k];

			}

			lsf = max(lsf, sum);

		}

	}

	cout << lsf << endl;

	return 0;
}