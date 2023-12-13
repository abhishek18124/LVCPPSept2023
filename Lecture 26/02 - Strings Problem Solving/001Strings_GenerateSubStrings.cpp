#include<iostream>
#include<string>

using namespace std;

void generateSubStrings(const string& str, int n) {

	for (int i = 0; i <= n - 1; i++) {

		for (int j = i; j <= n - 1; j++) {

			// // generate the subString that starts at the ith index and ends at the jth index

			// for (int k = i; k <= j; k++) {

			// 	cout << str[k];

			// }

			// cout << endl;

			string subString = str.substr(i, j - i + 1);
			cout << subString << endl;

		}

		cout << endl;

	}

	cout << endl;

}

int main() {

	string str = "abcde";
	int n = str.size(); // str.length()

	generateSubStrings(str, n);

	return 0;
}