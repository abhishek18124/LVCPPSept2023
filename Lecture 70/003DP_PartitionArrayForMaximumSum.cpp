#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int>& arr, int n, int k, int i, vector<int>& dp) {

	// base case

	// todo ...

	// recursive case

	// todo ...

}

int maxSumAfterPartitioning(vector<int>& arr, int k) {

	int n = arr.size();

	return helper(arr, n, k, 0);
}

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6};
	int k = 1;

	cout << maxSumAfterPartitioning(arr, k) << endl;

	return 0;
}