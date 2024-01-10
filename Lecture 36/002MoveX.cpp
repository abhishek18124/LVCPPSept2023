/*

Given a string str, design a recursive algorithm to move all the occurrence of letter x
to the end of the string str.

Example
	Input : str = "axbcxdxfx"
	Output: str = "abcdfxxxx"

	Input : str = "xabcxdxfx"
	Output: str = "abcdfxxxx"

*/

#include<iostream>

using namespace std;

// string move(string str, int n) {

// 	// base case

// 	if (n == 0) { // str == "" or str.empty()
// 		return "";
// 	}

// 	// recursive case

// 	string subString = str.substr(1);
// 	string subStringFromMyFriend = move(subString, n - 1);

// 	// return str[0] == 'x' ? subStringFromMyFriend + str[0] : str[0] + subStringFromMyFriend;

// 	// return str[0] == 'x' ? subStringFromMyFriend + string(1, str[0]) : string(1, str[0]) + subStringFromMyFriend;

// 	if (str[0] == 'x') {
// 		return subStringFromMyFriend + string(1, str[0]);
// 	}

// 	return string(1, str[0]) + subStringFromMyFriend;
// }

string move(string str) {

	// base case

	if (str == "") { // str.empty()
		return "";
	}

	// recursive case

	string subString = str.substr(1);
	string subStringFromMyFriend = move(subString);

	// return str[0] == 'x' ? subStringFromMyFriend + str[0] : str[0] + subStringFromMyFriend;

	// return str[0] == 'x' ? subStringFromMyFriend + string(1, str[0]) : string(1, str[0]) + subStringFromMyFriend;

	if (str[0] == 'x') {
		return subStringFromMyFriend + string(1, str[0]);
	}

	return string(1, str[0]) + subStringFromMyFriend;
}


int main() {

	string str = "cxxbxxa";
	int n = str.size();

	// cout << move(str, n) << endl;

	cout << move(str) << endl;

	return 0;
}