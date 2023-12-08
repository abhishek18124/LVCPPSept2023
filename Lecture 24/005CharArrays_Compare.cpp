#include<iostream>
#include<cstring>

using namespace std;

// len(s1) = n len(s2) = n worst case ~ O(n)

// len(s1) = m len(s2) = n worst case ~ O(min(m, n))

int compareString(char s1[], char s2[]) { // char* s1, char* s2

	int i = 0; // to iterate over s1[]
	int j = 0; // to iterate over s2[]

	while (s1[i] != '\0' and s2[j] != '\0') {

		if (s1[i] > s2[j]) {

			// s1 > s2

			return 1;

		} else if (s1[i] < s2[j]) {

			// s1 < s2

			return -1;

		}

		i++;
		j++;

	}

	if (s1[i] != '\0') {
		// len(s1) > len(s2) => s1 > s2
		return 1;
	} else if (s2[j] != '\0') {
		// len(s1) < len(s2) => s1 < s2
		return -1;
	}

	// s1 is equal to s2
	return 0;


}

int main() {

	char s1[] = "abc";
	char s2[] = "adc"; // on mac - 98-100 = -2

	// int ans = compareString(s1, s2);

	int ans = strcmp(s1, s2);

	// cout << ans << endl;

	if (ans == 0) {
		cout << s1 << " is equal to " << s2 << endl;
	} else if (ans > 0) { // i.e. +1
		cout << s1 << " > " << s2 << endl;
	} else { // ans < 0 i.e. ans = -1
		cout << s1 << " < " << s2 << endl;
	}

	return 0;
}