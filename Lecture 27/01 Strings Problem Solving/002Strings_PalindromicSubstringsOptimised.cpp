#include<iostream>
#include<string>

using namespace std;

int countPalindromicSubstringsOptimised(string s) {

	int n = s.size();

	int cnt = 0; // to track the no. of palindromic substrings in the given string

	// 1. count the no. of oddLength palindromic subStrings

	for (int i = 0; i < n; i++) {

		// count the no. of oddLength palindromic subStrings around s[i]

		int j = 0;
		while (i + j < n and i - j >= 0 and s[i + j] == s[i - j]) {
			// you've found a palindromic around s[i]
			cnt++;
			// continue with the expansion
			j++;
		}

	}

	// static_cast<int>(expr) is equivalent to (int)(expr) / int(expr)

	// 2. count the no. of evenLength palindromic subStrings

	for (double i = 0.5; i < n; i++) {

		// count the no. of evenLength palindromic subStrings around ith center

		double j = 0.5;
		while (i + j < n and i - j >= 0 and s[static_cast<int>(i + j)] == s[static_cast<int>(i - j)]) {
			// you've found a palindromic around s[i]
			cnt++;
			// continue with the expansion
			j++;
		}

	}

	return cnt;

}

int main() {

	string s = "abaaba";

	cout << countPalindromicSubstringsOptimised(s) << endl;

	return 0;
}