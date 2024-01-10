#include<iostream>

using namespace std;

void f(int n, char s, char d, char h) {

	// base case

	if (n == 0) {
		return;
	}

	// recursive case

	// 1. ask your friend to move n-1 disks from A(s) to B(h) using C(d)

	f(n - 1, s, h, d);

	// 2. move the largest disk from A (source) to C (destination)

	cout << "move disk from " << s << " to " << d << endl;

	// 3. ask your friend to move n-1 disks from B(h) to C(d) using A(s)

	f(n - 1, h, d, s);

}

int main() {

	int n = 3;

	f(n, 'A', 'C', 'B');

	return 0;
}