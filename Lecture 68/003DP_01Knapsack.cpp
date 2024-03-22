/*

Example :
	Input : N = 5, W = 4
			weights[] = {1, 2, 3, 2, 2}
			profits[] = {8, 4, 1, 5, 3}
	Output: 13

*/


#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int> weights, vector<int> profits, int N, int i, int w) {

	// base case

	if (i == N) { // mandatory

		// you are left with no objects

		return 0;

	}

	if (w == 0) { // optional

		// knapsack has no capacity

		return 0;

	}

	// recursive case

	// f(i, w) = find the max. profit you can make from objects i to n-1 given a knapsack of capacity w

	if (weights[i] > w) {

		// exclude the ith object from the knapsack
		return helper(weights, profits, N, i + 1, w);

	}

	// weights[i] <= w

	// decide for the ith object

	// option 1 - include the ith object into the knapsack

	// option 2 - exclude the ith object from the knapasack

	return max(profits[i] + helper(weights, profits, N, i + 1, w - weights[i]),
	           helper(weights, profits, N, i + 1, w));

}

// time : O(NW)
// space: O(NW + N) due to dp[][] and function call stack

int helperTopDown(vector<int> weights, vector<int> profits, int N, int i, int w, vector<vector<int>>& dp) {

	// lookup

	if (dp[i][w] != -1) {

		// you've already solve f(i, w)

		return dp[i][w];

	}

	// base case

	if (i == N) { // mandatory

		// you are left with no objects

		return dp[i][w] = 0;

	}

	if (w == 0) { // optional

		// knapsack has no capacity

		return dp[i][w] = 0;

	}

	// recursive case

	// f(i, w) = find the max. profit you can make from objects i to n-1 given a knapsack of capacity w

	if (weights[i] > w) {

		// exclude the ith object from the knapsack
		return dp[i][w] = helperTopDown(weights, profits, N, i + 1, w, dp);

	}

	// weights[i] <= w

	// decide for the ith object

	// option 1 - include the ith object into the knapsack

	// option 2 - exclude the ith object from the knapasack

	return dp[i][w] = max(profits[i] + helperTopDown(weights, profits, N, i + 1, w - weights[i], dp),
	                      helperTopDown(weights, profits, N, i + 1, w, dp));

}

// time : O(NW)
// space: O(NW) due to dp[][]

int helperBottomUp(vector<int> weights, vector<int> profits, int N, int W) {

	vector<vector<int>> dp(N + 1, vector<int>(W + 1));

	for (int i = 0; i <= N; i++) {
		dp[i][0] = 0;
	}

	for (int w = 0; w <= W; w++) {
		dp[N][w] = 0;
	}

	for (int i = N - 1; i >= 0; i--) {

		for (int w = 1; w <= W; w++) {

			// dp[i][w] = f(i, w)

			// f(i, w) = find the max. profit you can make from objects i to n-1 given a knapsack of capacity w

			if (weights[i] > w) {

				// exclude the ith object from the knapsack
				dp[i][w] = dp[i + 1][w];

			} else {

				// weights[i] <= w

				// decide for the ith object

				// option 1 - include the ith object into the knapsack

				// option 2 - exclude the ith object from the knapasack

				dp[i][w] = max(profits[i] + dp[i + 1][w - weights[i]],
				               dp[i + 1][w]);

			}

		}

	}

	return dp[0][W]; // at the (0, W)th index of dp[][], we store f(0, W)

}

// time : O(NW)
// space: O(W) due to dp[]

int helperBottomUpSpaceOptimised(vector<int> weights, vector<int> profits, int N, int W) {

	vector<int> dp(W + 1, 0);

	for (int i = N - 1; i >= 0; i--) {

		for (int w = W; w >= 1; w--) {

			// dp[i][w] = f(i, w)

			// f(i, w) = find the max. profit you can make from objects i to n-1 given a knapsack of capacity w

			if (weights[i] > w) {

				// exclude the ith object from the knapsack
				dp[w] = dp[w];

			} else {

				// weights[i] <= w

				// decide for the ith object

				// option 1 - include the ith object into the knapsack

				// option 2 - exclude the ith object from the knapasack

				dp[w] = max(profits[i] + dp[w - weights[i]],
				            dp[w]);

			}

		}

	}

	return dp[W]; // at the Wth index of dp[], we store f(0, W)

}

int main() {

	int N = 5;
	int W = 4;

	vector<int> weights = {1, 2, 3, 2, 2};
	vector<int> profits = {8, 4, 1, 5, 3};

	cout << helper(weights, profits, N, 0, W) << endl;

	vector<vector<int>> dp(N + 1, vector<int>(W + 1, -1));

	cout << helperTopDown(weights, profits, N, 0, W, dp) << endl;

	cout << helperBottomUp(weights, profits, N, W) << endl;

	cout << helperBottomUpSpaceOptimised(weights, profits, N, W) << endl;

	return 0;
}