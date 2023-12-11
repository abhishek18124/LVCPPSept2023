#include<iostream>
#include<cstring>

using namespace std;

// time : n/2 steps ~ O(n)
// space : O(1)

bool isPalindrome(char s[]) {

	int n = strlen(s);

	int i = 0;
	int j = n - 1;

	while (i < j) {

		if (s[i] != s[j]) {

			// given s[] is not a palindrome

			return false;

		}

		// s[i] is equal to s[j]

		i++;
		j--;

	}

	// given s[] is a palindrome

	return true;

}

int main() {

	char s[] = "abcdfdcba";

	isPalindrome(s) ? cout << "palindrome" << endl : cout << "not a palindrome" << endl;

	// if (isPalindrome(s)) {
	// 	cout << "palindrome" << endl;
	// } else {
	// 	cout << "not a palindrome" << endl;
	// }

	return 0;

}