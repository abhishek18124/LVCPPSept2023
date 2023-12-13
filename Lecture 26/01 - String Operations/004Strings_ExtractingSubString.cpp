#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "abcdef";

	string subString = s.substr(2);
	cout << subString << endl;

	subString = s.substr(2, 3);
	cout << subString << endl;

	subString = s.substr(1, 10);
	cout << subString << endl;

	return 0;
}