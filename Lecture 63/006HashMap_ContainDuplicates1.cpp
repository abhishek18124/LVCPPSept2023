#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

// time : O(n)
// space: O(n) due to freqMap

bool isDuplicatePresent(vector<int> v, int n) {

	unordered_map<int, int> freqMap;

	for (int i = 0; i < n; i++) {

		freqMap[v[i]]++;

		// if(freqMap[v[i]] > 1) {
		// 	// v[i] is a duplicate
		// 	return true;
		// }

	}

	for (pair<int, int> p : freqMap) {
		cout << "freq(" << p.first << ") = " << p.second << endl;
	}

	cout << endl;

	for (pair<int, int> p : freqMap) {

		if (p.second > 1) {

			// p.first is a duplicate

			return true;

		}

	}

	// there are no duplicates

	return false;

}

// time : O(n)
// space: O(n)

bool isDuplicatePresentUsingSet(vector<int> v, int n) {

	unordered_set<int> seen;

	for (int i = 0; i < n; i++) {

		if (seen.find(v[i]) != seen.end()) {

			// you've seen v[i] previously

			return true;

		} else {

			// you are seeing v[i] for the 1st time

			seen.insert(v[i]);

		}

	}

	// no duplicates were found

	return false;


}


int main() {

	vector<int> v = {1, 2, 3, 4, 1, 2};
	int n = v.size();

	isDuplicatePresent(v, n) ? cout << "duplicate found" << endl : cout << "no duplicates" << endl;

	isDuplicatePresentUsingSet(v, n) ? cout << "duplicate found" << endl : cout << "no duplicates" << endl;

	return 0;
}