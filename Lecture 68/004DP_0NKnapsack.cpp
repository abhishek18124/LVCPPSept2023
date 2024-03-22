/*

Example :
	Input : n = 3, x = 10
			w[] = {6, 3, 8}
			p[] = {3, 1, 4}
	Output:

*/


#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int>& weights, vector<int>& profits,
           int n, int i, int w) {

	// base case

	// recursive case

	// make a decision for the ith object

	// 1. include the ith object into the knapsack

	// 2. exclude the ith object from the knapsack

}

int main() {

	int N = 3;
	int W = 10;

	vector<int> weights = {6, 3, 8};
	vector<int> profits = {3, 1, 4};

	cout << helper(profits, weights, N, 0, W) << endl;

	return 0;
}