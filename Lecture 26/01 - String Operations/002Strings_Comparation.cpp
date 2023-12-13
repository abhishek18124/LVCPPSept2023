#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "adc";

	cout << s1.compare(s2) << endl;

	s1 = "xyz";
	s2 = "abc";

	cout << s1.compare(s2) << endl;

	cout << (int)'x' << " " << (int)'a' << endl;

	s1 = "abc";
	s2 = "abc";

	cout << s1.compare(s2) << endl;

	s1 = "abcdefghk";
	s2 = "abcdefgh";

	cout << s1.compare(s2) << endl;

	s1 = "abc";
	s2 = "adc";

	if (s1 > s2) {

		cout << "s1 > s2" << endl;

	} else {

		cout << "s1 < s2" << endl;

	}

	return 0;
}