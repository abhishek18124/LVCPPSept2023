#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

// time : O(n)
// space: O(n)

int longestPalindrome(string str) {

	unordered_set<char> seen;
	int longestLength = 0;

	for (char ch : str) {

		if (seen.find(ch) != seen.end()) {

			// ch has been seen previously

			longestLength += 2;
			seen.erase(ch);

		} else {

			// ch is seen for the 1st time

			seen.insert(ch);

		}

	}

	if (seen.size() > 0) {

		longestLength++;

	}

	return longestLength;

}

int main() {

	string str = "aabbcceeeccdd";

	cout << longestPalindrome(str) << endl;

	return 0;
}