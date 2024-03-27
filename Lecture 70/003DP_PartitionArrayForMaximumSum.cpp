#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int>& arr, int n, int k, int i) {

	// base case

	if (i == n) {

		// you've managed to build a valid partition

		return 0;

	}

	// recursive case

	// fi = find the maximum sum upon partitioning the arr[i...n-1] such that each subarray has a size <= k

	// decide the next cut

	int maxSoFar = INT_MIN;
	int max_ij = INT_MIN;

	for (int j = i; j <= i + k - 1 and j < n; j++) {

		// we've decided to make a cut at the jth index
		max_ij = max(max_ij, arr[j]);
		maxSoFar = max(maxSoFar, max_ij * (j - i + 1) + helper(arr, n, k, j + 1));

	}

	return maxSoFar;

}

int helperBottomUp(vector<int>& arr, int n, int k) {

	vector<int> dp(n + 1);

	dp[n] = 0; // at the nth index of dp[], we store f(n)

	for (int i = n - 1; i >= 0; i--) {

		// dp[i] = f(i)

		// fi = find the maximum sum upon partitioning the arr[i...n-1] such that each subarray has a size <= k

		// decide the next cut

		int maxSoFar = INT_MIN;
		int max_ij = INT_MIN;

		for (int j = i; j <= i + k - 1 and j < n; j++) {

			// we've decided to make a cut at the jth index
			max_ij = max(max_ij, arr[j]);
			maxSoFar = max(maxSoFar, max_ij * (j - i + 1) + dp[j + 1]);

		}

		dp[i] = maxSoFar;


	}

	return dp[0]; // at the 0th index of dp[], we store f(0)

}

int maxSumAfterPartitioning(vector<int>& arr, int k) {

	int n = arr.size();

	// return helper(arr, n, k, 0);

	return helperBottomUp(arr, n, k);
}

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6};
	int k = 1;

	cout << maxSumAfterPartitioning(arr, k) << endl;

	return 0;
}