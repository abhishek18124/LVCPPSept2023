#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 20;
	int i;

	int cnt = 0;

	for (i = 0; i < n; i++) {

		if (arr[i] == t) {

			cout << t << " found at index " << i << endl;
			cnt++;

		}

	}

	cout << cnt << endl;

	if (cnt == 0) {
		cout << t << " not found" << endl;
	}

	return 0;
}