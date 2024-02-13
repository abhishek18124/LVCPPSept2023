#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nearestGreaterLeft(int A[], int n) {

	vector<int> v;
	stack<int> s; // to be used as a monotonic stack

	for (int i = 0; i <= n - 1; i++) {

		// find the nearest greater element to the left of A[i]

		while (!s.empty() and s.top() <= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			// A[i] doesn't have any greater elements to its left
			v.push_back(-1);
		} else {
			// s.top() > A[i]
			v.push_back(s.top());
		}

		s.push(A[i]);

	}

	return v;

}


int main() {

	int A[] = {5, 2, 0, 4, 1, 3, 6};
	int n = sizeof(A) / sizeof(int);

	vector<int> v = nearestGreaterLeft(A, n);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}