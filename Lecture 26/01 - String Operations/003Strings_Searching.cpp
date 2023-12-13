#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "bcdabcdabc";
	string subString = "abc";

	cout << s.find(subString) << endl;
	cout << s.rfind(subString) << endl;

	subString = "xyz";

	cout << s.find(subString) << endl;
	cout << string::npos << endl;

	if (s.find(subString) != string::npos) {

		// you've found the subString in 's'

		cout << "1st occurrence of " << subString << " in " << s << " is at index " << s.find(subString) << endl;
	} else {

		cout << subString << " not found" << endl;

	}

	subString = "abc";

	if (s.find(subString) != string::npos) {

		// you've found the subString in 's'

		cout << "1st occurrence of " << subString << " in " << s << " is at index " << s.find(subString) << endl;
	} else {

		cout << subString << " not found" << endl;

	}

	return 0;
}