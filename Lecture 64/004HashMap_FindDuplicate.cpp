#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v = {1, 3, 4, 1, 2};

	int slow = v[0];
	int fast = v[0];

	while (true) {

		slow = v[slow];
		fast = v[v[fast]];

		if (slow == fast) {
			break;
		}

	}

	slow = v[0];

	while (slow != fast) {

		slow = v[slow];
		fast = v[fast];

	}

	// slow & fast are at the start of the cycle i.e. they repr. the duplicate no.

	cout << slow << endl; // cout << fast << endl;

	return 0;
}