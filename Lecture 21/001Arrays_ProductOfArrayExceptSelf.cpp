// contraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int nums[] = {1, 2, 3, 4, 5};
	int n = sizeof(nums) / sizeof(int);

	int answer[100];

	// time : O(n^2)

	for (int i = 0; i < n; i++) {

		int li = 1; // represents product of elements from 0 to i-1

		for (int j = 0; j <= i - 1; j++) { // 0 to i-1
			li = li * nums[j];
		}

		int ri = 1; // represents product of elements from i+1 to n-1

		for (int j = i + 1; j <= n - 1; j++) { // i+1 to n-1
			ri = ri * nums[j];
		}

		answer[i] = li * ri;

	}

	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}

	cout << endl;

	return 0;
}