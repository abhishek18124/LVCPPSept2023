#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "defghi";

	s1 = s2; // copies contents of s2 into s1 // using copy assignment operator of the string class to make a copy

	cout << s1 << endl;

	string s3 = s2; // s3 is created as a copy of s2 // using copy constructor of the string class to make a copy

	cout << s3 << endl;

	string s4(s2); // s4 is created as a copy of s2 // using copy constructor of the string class to make a copy

	cout << s4 << endl;

	return 0;
}