#include<iostream>
#include<string>

using namespace std;

void generateSubstrings(const string& str, int n) {

	for (int l = 1; l <= n; l++) {

		for (int i = 0; i <= n - l; i++) {

			// generate the subString starting at index 'i' whose length is equal to 'l'

			cout << str.substr(i, l) << endl;

		}

		cout << endl;

	}

	cout << endl;

}

int main() {

	string str = "abcde";
	int n = str.size();

	generateSubstrings(str, n);

	return 0;
}