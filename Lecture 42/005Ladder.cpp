/*

Suppose there is a ladder with n steps. A person standing at the bottom of the ladder and wants to
reach to its top. Assume the person can take atmost k steps at a time. Then, count the number
of ways, the person can reach the top of the ladder.

Example
	Input : n = 4, k = 3
	Output: 7
	Explanation : [1, 1, 1, 1],
	              [1, 1, 2],
	              [1, 2, 1],
	              [2, 1, 1],
	              [2, 2],
	              [1, 3],
	              [3, 1]

*/
#include<iostream>

using namespace std;

int f(int n, int k, int i, vector<int>& path) {

	// base case

	if (i == n) {

		// you've reached the top of the ladder

		// i.e. you've found a way / a path to reach to the top of the ladder

		for (int i = 0; i < path.size(); i++) {
			cout << path[i] << " ";
		}
		cout << endl;

		return 1;

	}

	if (i > n) {

		// the path that you've built is not valid

		return 0;

	}

	// recursive case

	// decide the size of the next jump

	int cnt = 0;

	for (int j = 1; j <= k; j++) {

		// can the next jump be on size 'j' given that we are at the ith step

		path.push_back(j);

		cnt += f(n, k, i + j, path);

		path.pop_back(); // backtrack



	}

	return cnt;

}

int main() {

	int n = 4;
	int k = 3;

	vector<int> path;

	cout << f(n, k, 0, path) << endl;

	return 0;
}