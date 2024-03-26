/*

=============
Edit Distance
=============

Given two strings s1 and s2, return the min. no. of edit operations required to convert
s1 to s2.

You have the following three operations permitted on a word:

	> Insert a character
	> Delete a character
	> Replace a character

The min. no. of edits required to convert s1 to s2 is also known as the edit distance
between s1 & s2.

Examples

Example 1:

	Input: s1 = "food", s2 = "money"
	Output: 4

Example 2:

	Input: s1 = "horse", s2 = "ros"
	Output: 3

	Explanation:
	horse -> rorse (replace 'h' with 'r')
	rorse -> rose (remove 'r')
	rose -> ros (remove 'e')

Example 3:

	Input: s1 = "intention", s2 = "execution"
	Output: 5

	Explanation:
	intention -> inention (remove 't')
	inention -> enention (replace 'i' with 'e')
	enention -> exention (replace 'n' with 'x')
	exention -> exection (replace 'n' with 'c')
	exection -> execution (insert 'u')

*/

#include<iostream>
#include<vector>

using namespace std;

int editDistance(string s1, string s2, int m, int n, int i, int j) {

	// base case

	if (i == m) {
		// compute the edit distance b/w s1[m...m-1] and s2[j...n-1]
		return n - j;
	}

	if (j == n) {
		// compute the edit distance b/w s1[i...m-1] and s2[n...n-1]
		return m - i;
	}

	// recursive case

	// compute the edit distance b/w s1[i...m-1] and s2[j...n-1]

	// todo...
}

int main() {

	string s1("food");
	int m = s1.size();

	string s2("money");
	int n = s2.size();

	cout  << editDistance(s1, s2, m, n, 0, 0) << endl;

	return 0;
}