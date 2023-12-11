#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

// n + n + 26 steps

// space : 26 + 26 extra space

bool isAnagrams(char s1[], char s2[]) { // char* s1, char* s2

	int n = strlen(s1);
	int m = strlen(s2);

	if (n != m) {

		// s1[] and s2[] cannot be anagrams

		return false;

	}

	// length of s1[] is equal to length of s2[]

	// 1. build freqMaps for s1[] and s2[]

	int f1[26] = {};

	for (int i = 0; s1[i] != '\0'; i++) {

		char ch = s1[i];
		int idx = ch - 'a';
		f1[idx]++;

	}

	for (int i = 0; i < 26; i++) {
		cout << f1[i] << " ";
	}

	cout << endl;

	int f2[26];

	memset(f2, 0, sizeof(f2));

	for (int i = 0; s2[i] != '\0'; i++) {

		// char ch = s2[i];
		// int idx = ch - 'a';
		// f2[idx]++;

		f2[s2[i] - 'a']++;

	}

	for (int i = 0; i < 26; i++) {
		cout << f2[i] << " ";
	}

	cout << endl;

	// 2. compare f1[] and f2[]

	for (int i = 0; i < 26; i++) {

		if (f1[i] != f2[i]) {

			// freq of the char in s1[] mapped to the ith index

			// does not match with the

			// freq of the char in s2[] mapped to the ith index

			// therefore s1[] and s2[] are not anagrams

			return false;

		}

	}

	// s1[] and s2[] are anagrams

	return true;

}

int main() {

	char s1[] = "aabbbcc";
	char s2[] = "aaabbcc";

	isAnagrams(s1, s2) ? cout << "anagrams" << endl : cout << "not anagrams" << endl;

	return 0;
}