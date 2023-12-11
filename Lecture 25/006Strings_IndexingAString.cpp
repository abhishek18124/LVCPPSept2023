#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "namaste";

	for (int i = 0; s[i] != '\0'; i++) {

		cout << s[i] << " ";

	}

	cout << endl;

	int n = s.size(); // s.length()

	for (int i = 0; i < n; i++) {

		cout << s[i] << " ";

	}

	cout << endl;

	for (int i = 0; i < s.size(); i++) {

		cout << s[i] << " ";

	}

	cout << endl;

	return 0;
}