#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// return true if you want 'a' to be ordered before 'b' otherwise false

bool compare(int a, int b) {

	string sa = to_string(a);
	string sb = to_string(b);

	// if(sa > sb) {
	// 	return true;
	// }

	// return false;

	// return sa > sb;

	if ((sa + sb) > (sb + sa)) {

		// a should be ordered before b

		return true;

	}

	return false;

}

int main() {

	int arr[] = {98, 9, 78, 7};
	int n = sizeof(arr) / sizeof(int);

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}

	cout << endl;

	return 0;
}