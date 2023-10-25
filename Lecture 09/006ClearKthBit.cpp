#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 3;

	int mask = ~(1 << k); // only the kth bit of mask is not set

	cout << (n & mask) << endl;

	return 0;
}