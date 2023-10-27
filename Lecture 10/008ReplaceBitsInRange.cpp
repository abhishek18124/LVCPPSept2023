#include<iostream>

using namespace std;

int main() {

	int n = 169;
	int m = 10;

	int i = 3;
	int j = 6;

	// clear bits from i to j in 'n'

	int m1 = -1 << (j + 1);
	int m2 = (1 << i) - 1;

	int mask = m1 | m2;

	n = n & mask;

	// replace bits from i to j in 'n' with bits of m

	cout << (n | (m << i)) << endl;

	return 0;
}