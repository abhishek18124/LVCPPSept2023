#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;
	int i;

	bool flag = false; // assume 't' is not found

	for (i = 0; i < n; i++) {

		if (arr[i] == t) {

			cout << t << " found at index " << i << endl;
			flag = true; // 't' has been found

		}

	}

	// if (flag == false) {
	// 	cout << t << " not found" << endl;
	// }

	if (!flag) {
		cout << t << " not found" << endl;
	}

	return 0;
}