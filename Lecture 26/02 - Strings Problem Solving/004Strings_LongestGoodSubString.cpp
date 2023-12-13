#include<iostream>
#include<string>

using namespace std;

// worst-case (subString is the string itself and it is good) - n steps

bool isGoodString(const string& str) {

	for (char ch : str) {

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

			// ch is a consonant, str is not a good string

			return false;

		}

	}

	// str is a good string

	return true;

}

// time : O(n^3)

int longestGoodSubstring(string& str) {

	int maxSoFar = 0;
	int n = str.size();

	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			string subString = str.substr(i, j - i + 1);
			if (isGoodString(subString)) {
				// subString is a good subString
				maxSoFar = max(maxSoFar, j - i + 1);
			}

		}

	}

	return maxSoFar;

}

int main() {

	string str = "cbaeicdeiou";

	cout << longestGoodSubstring(str) << endl;

	return 0;
}