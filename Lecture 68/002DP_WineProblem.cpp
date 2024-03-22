/*

Given n wines in a row, with integers denoting the cost of each wine respectively. Each year
you can sell the first or the last wine in the row. However, the price of wines increases
over time.

Let the initial prices of the wines be [p_1, p_2, ... , p_n]. In the yth year, the profit
from the kth wine will be y*p_k.

Find the maximum profit from all the wines.

Example :
	Input : prices[] = {2, 3, 5, 1, 4}
	Ouptut: 50

*/

#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int> prices, int i, int j, int y) {

	// base case

	if (i == j) {

		// you are left with a single bottle of wine i.e. you are in the nth year

		return prices[i] * y; // prices[j] * y [remember, y is equal to n]

	}

	// recursive case

	// find the max. profit you can make by selling bottles i to j starting from the yth year

	// decide for the yth year

	// option 1 - sell the ith bottle of wine in the yth year

	// option 2 - sell the jth bottle of wine in the yth year

	return max(prices[i] * y + helper(prices, i + 1, j, y + 1),
	           prices[j] * y + helper(prices, i, j - 1, y + 1));

}

// time : O(n^2)
// space: O(n^2 + n) due to dp[][] and function call stack

int helperTopDown(vector<int> prices, int i, int j, int y, vector<vector<int>>& dp) {

	// lookup

	if (dp[i][j] != -1) {

		// you already know the result of f(i, j)
		return dp[i][j];

	}

	// base case

	if (i == j) {

		// you are left with a single bottle of wine i.e. you are in the nth year

		return dp[i][j] = prices[i] * y; // prices[j] * y [remember, y is equal to n]

	}

	// recursive case

	// f(i, j) = find the max. profit you can make by selling bottles i to j starting from the yth year

	// decide for the yth year

	// option 1 - sell the ith bottle of wine in the yth year

	// option 2 - sell the jth bottle of wine in the yth year

	return dp[i][j] = max(prices[i] * y + helperTopDown(prices, i + 1, j, y + 1, dp),
	                      prices[j] * y + helperTopDown(prices, i, j - 1, y + 1, dp));

}

// time : O(n^2)
// space: O(n^2) due to dp[][]

int helperBottomUp(vector<int>& prices, int n) {

	vector<vector<int>> dp(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		int y = n;
		dp[i][i] = prices[i] * y;
	}

	for (int i = n - 2; i >= 0; i--) {

		for (int j = i + 1; j < n; j++) {

			// dp[i][j] = f(i, j)
			int y = n - j + i;
			dp[i][j] = max(y * prices[i] + dp[i + 1][j], y * prices[j] + dp[i][j - 1]);

		}

	}

	return dp[0][n - 1]; // at the (0, n-1)th index we store f(0, n-1)

}

int main() {

	vector<int> prices = {2, 3, 5, 1, 4};
	int n = prices.size();

	cout << helper(prices, 0, n - 1, 1) << endl;

	vector<vector<int>> dp(n, vector<int>(n, -1));

	cout << helperTopDown(prices, 0, n - 1, 1, dp) << endl;

	cout << helperBottomUp(prices, n) << endl;

	return 0;
}