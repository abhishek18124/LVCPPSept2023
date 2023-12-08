// n <= 50 and m <= 50

#include<iostream>
#include<cstring>

using namespace std;

// len(s1) = m len(s2) = n time ~ O(n) i.e. length of the second string

void concatString(char s1[], char s2[]) {

	int i = strlen(s1); // to iterate over s1[]
	int j = 0; // to iterate over s2[]

	while (s2[j] != '\0') {

		s1[i] = s2[j];
		i++;
		j++;

	}

	s1[i] = '\0';

}


int main() {

	char s1[101] = "abc";
	char s2[] = "def";

	cout << "before concat : " << s1 << endl;

	// concatString(s1, s2);

	strcat(s1, s2);

	cout << "after concat : " << s1 << endl;

	return 0;
}