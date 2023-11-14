#include<iostream>

using namespace std;

void uniqueNumbers(int arr[], int n) {

	int ans = 0;

	for (int i = 0; i < n; i++) {

		ans = ans ^ arr[i];

	}

	// cout << ans << endl;

	// since ans is +ve, its binary representation will have atleast one set bit

	// you've find the position of any one of those set bits, in our implementation

	// we are finding the position of the rightmost set bit and then using it to

	// partition in the arr[] into set A and set B

	int pos = 0;

	while ( (ans & 1) == 0) {
		pos++;
		ans = ans >> 1;
	}

	// cout << pos << endl;

	int mask = (1 << pos);

	int firstUniqueNo  = 0;
	int secondUniqueNo = 0;

	for (int i = 0; i < n; i++) {

		if ((arr[i]&mask) == 0) {

			// arr[i] is part of set A
			cout << arr[i] << " is part of set A" << endl;
			firstUniqueNo = firstUniqueNo ^ arr[i];

		} else {

			// arr[i] is part of set B
			cout << arr[i] << " is part of set B" << endl;
			secondUniqueNo = secondUniqueNo ^ arr[i];

		}

	}

	cout << firstUniqueNo << " " << secondUniqueNo << endl;

}

int main() {

	int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7};

	int n = sizeof(arr) / sizeof(int);

	uniqueNumbers(arr, n);

	return 0;
}
