#include<iostream>

using namespace std;

// time : O(n)
// space : O(1)

int maxSubarraySum(int arr[], int n) {

	int x;

	x = arr[0]; // intially, x denotes x[0]
	int maxSoFar = x;

	for (int i = 1; i < n; i++) {

		x = max(x + arr[i], arr[i]);
		maxSoFar = max(maxSoFar, x);

	}

	return maxSoFar;

}

// time : O(n)
// space : O(1)

int minSubarraySum(int arr[], int n) {

	int x;

	x = arr[0]; // intially, x denotes x[0]
	int minSoFar = x;

	for (int i = 1; i < n; i++) {

		x = min(x + arr[i], arr[i]);
		minSoFar = min(minSoFar, x);

	}

	return minSoFar;

}

int computeSum(int arr[], int n) {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;

}

int maxSubarraySumCircular(int arr[], int n) {

	int sum = computeSum(arr, n);
	int minSum = minSubarraySum(arr, n);
	int maxSum = maxSubarraySum(arr, n);

	return sum == minSum ? maxSum : max(sum - minSum, maxSum);

}

int main() {

	int arr[] = { 1, 2, -3, -4, 5, 6};
	int n = sizeof(arr) / sizeof(int);

	cout << maxSubarraySumCircular(arr, n) << endl;

	return 0;
}