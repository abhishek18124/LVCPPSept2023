#include<iostream>
#include<algorithm>

using namespace std;

bool comparator(int a, int b) {

	// return true if you want a to be ordered before b in the sorted arr[] otherwise false

	// if (a > b) {

	// 	// we want to sort the arr[] in the decreasing order

	// 	// we've to return true if we want 'a' to be order before 'b' in the sorted arr[]

	// 	return true;

	// }

	// return false;

	return a > b;

}

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	// sorting a sequence in the decreasing order

	// sort(begin, end, comparator) // comparator can be a function pointer or it can be function object or a functor

	// sort(arr, arr + n, comparator); // &comparator

	// greater<int> funcObj;

	// sort(arr, arr + n, funcObj);

	sort(arr, arr + n, greater<int>());

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	return 0;
}
