#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

// time : O(n)
// space : O(n)

bool isValid(vector<int> v, int k) {

	int n = v.size();

	unordered_map<int, int> indexMap;
	for (int i = 0; i < n; i++) {

		if (indexMap.find(v[i]) != indexMap.end()) {

			// v[i] was seen previously

			if (i - indexMap[v[i]] <= k) {

				// you've found a valid pair

				return true;

			}

		}

		indexMap[v[i]] = i;

	}

	// no valid pairs were found

	return false;

}

int main() {

	vector<int> v = {1, 2, 3, 1, 2, 3, 2};
	int k = 2;

	isValid(v, k) ? cout << "found a valid pair" << endl : cout << "no valid pair found" << endl;

	return 0;
}