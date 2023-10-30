#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for (int i = 1; i <= n; i++) {

		// 1. for the ith row, print n-i+1 characters in the inc. order starting with 'A'

		char ch = 'A';

		for (int j = 1; j <= n - i + 1; j++) {

			cout << ch << " ";
			ch++;

		}

		// 2. then print n-i+1 more characters in the dec. order

		ch--;

		for (int j = 1; j <= n - i + 1; j++) {

			cout << ch << " ";
			ch--;

		}

		cout << endl;

	}

	return 0;
}