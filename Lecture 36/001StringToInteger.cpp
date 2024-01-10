#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case

	// if (n == 0) { // str.empty() or str == ""
	// 	return 0;
	// }

	if (n == 1) {
		return str[0] - '0';
	}

	// recursive case

	string subString = str.substr(0, n - 1);
	int integerFromMyFriend = stringToInteger(subString, n - 1);

	return integerFromMyFriend * 10 + (str[n - 1] - '0');

}

int main() {

	string str = "12345";
	int n = str.size();

	cout << stringToInteger(str, n) << endl;

	return 0;
}