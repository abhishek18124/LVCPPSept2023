#include<iostream>
#include<vector>

using namespace std;

// return true if you want 'a' to be ordered before 'b' in the sorted sequence otherwise return false

bool comparator(int a, int b) {
	// if(a > b) {
	// 	return true;
	// }
	// return false;

	return a > b;
}

int main() {

	// 1. creating a vector using initialiser list

	vector<int> v = {1, 0, 2, 4, 3};

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// 2. sorting a vector in the decreasing order

	// sort(v.begin(), v.end(), comparator); // comparator is a function pointer

	// sort(v.rbegin(), v.rend());

	// sort(v.begin(), v.end(), greater<int>());

	greater<int> obj; // obj is a callable object since it is a functor

	sort(v.begin(), v.end(), obj); // obj is a function object or functor

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}