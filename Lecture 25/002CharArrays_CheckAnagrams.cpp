#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

bool isAnagrams(char s1[], char s2[]) { // char* s1, char* s2

	int n = strlen(s1);
	int m = strlen(s2);

	if (n != m) {

		// s1[] and s2[] cannot be anagrams

		return false;

	}

	// 1. sort s1[] and s2[]

	sort(s1, s1 + n);
	sort(s2, s2 + m);

	cout << s1 << endl;
	cout << s2 << endl;

	// 2. compare s1[] and s2[]

	return strcmp(s1, s2) == 0 ? true : false;

}

int main() {

	char s1[] = "state";
	char s2[] = "taste";

	isAnagrams(s1, s2) ? cout << "anagrams" << endl : cout << "not anagrams" << endl;

	return 0;
}