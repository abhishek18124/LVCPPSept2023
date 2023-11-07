#include<iostream>

using namespace std;

int main() {

	int arr[] = { -10, -20, 1, 2, 3};
	int n = sizeof(arr) / sizeof(int);

	int fL = INT_MIN;
	int sL = INT_MIN;
	int tL = INT_MIN;

	int fS = INT_MAX;
	int sS = INT_MAX;

	// time : O(n)

	for (int i = 0; i < n; i++) {

		if (arr[i] > fL) {

			tL = sL;
			sL = fL;
			fL = arr[i];

		} else if (arr[i] > sL) {

			tL = sL;
			sL = arr[i];

		} else if (arr[i] > tL) {

			tL = arr[i];

		}

		if (arr[i] < fS) {

			sS = fS;
			fS = arr[i];

		} else if (arr[i] < sS) {

			sS = arr[i];

		}

	}

	cout << max(fL * sL * tL, fL * fS * sS) << endl;

	int p1 = fL * sL * tL;
	int p2 = fL * fS * sS;

	cout << max(p1, p2) << endl;

	return 0;
}