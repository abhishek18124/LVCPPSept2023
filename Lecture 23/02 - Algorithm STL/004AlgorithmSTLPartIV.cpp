#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	// 1. searching for a key in a sequence using find()

	int key = 30;

	auto it = find(arr, arr + n, key); // find the key [begin, end)

	cout << it << endl;

	if (it != arr + n) {
		// key is present in the arr[]
		cout << key << " found at index " << it - arr << endl;
	} else {
		cout << key << " not found" << endl;
	}

	// 2. counting the occurrences of a key in a sequence using count()

	cout << count(arr, arr + n, key) << endl;

	key = 100;

	cout << count(arr, arr + n, key) << endl;

	return 0;
}
