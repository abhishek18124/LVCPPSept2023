#include<iostream>
#include<vector>

using namespace std;

void generatePermutations(int t, const vector<int>& c, vector<int>& perm) {

	// base case

	if (t == 0) {

		// you've managed to build a permutation

		for (int i = 0; i < perm.size(); i++) {
			cout << perm[i] << " ";
		}

		cout << endl;

		return;

	}

	// recursion case

	// generate permutations of 'c' that sums up to 't' or choose candidates that sum up to 't'

	// decide the next candidate

	for (int j = 0; j < c.size(); j++) {

		// can c[j] be the next candidate

		if (c[j] <= t) {

			perm.push_back(c[j]);
			generatePermutations(t - c[j], c, perm);
			perm.pop_back(); // backtracking

		}

	}

}

int main() {

	vector<int> c = {2, 3, 5, 7};
	int t = 7;

	vector<int> perm; // to track the permutation that sums up to 't'

	generatePermutations(t, c, perm);

	return 0;
}