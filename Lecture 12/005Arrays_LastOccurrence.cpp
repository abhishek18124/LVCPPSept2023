#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 30;
	int i;

	for (i = n - 1; i >= 0; i--) {

		if (arr[i] == t) {

			cout << t << " found at index " << i << endl;
			break;

		}

	}

	if (i == -1) {
		cout << t << " not found" << endl;
	}

	return 0;
}