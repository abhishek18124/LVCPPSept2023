#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(string a, string b) {

	// return true if you want a to be ordered before b otherwise false

	if (a < b) {
		// if a is lexicographically greater than b and
		// you want to sort the sequence in lexicographically
		// decreasing order
		return true;
	}

	return false;

}

bool lengthCompare(string a, string b) {

	// return true if you want a to be ordered before b otherwise false

	if (a.length() < b.length()) {

		// for sorting inc. order 'a' should come before 'b'
		return true;

	}

	return false;

}

int main() {

	string arr[] = {"vwxyz", "abc", "g", "hijk"};
	int n = 4;

	// sort(arr, arr + n);

	// sort(arr, arr + n, greater<string>());

	// sort(arr, arr + n, compare);

	sort(arr, arr + n, lengthCompare);

	for (int i = 0; i < n; i++) {

		cout << arr[i] << " ";

	}

	cout << endl;

	return 0;
}