#include<iostream>
#include<vector>

using namespace std;

// time : O(n)
// space: O(1)
// arr[] is modified

int main() {

	vector<int> v = {1, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	int n = v.size();

	for (int i = 0; i < n; i++) {

		int x = v[i] % n;
		v[x] += n;

	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i++) {

		if (v[i] / n > 1) {

			cout << i << " ";

		}

	}

	cout << endl;

	return 0;
}