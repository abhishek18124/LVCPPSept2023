#include<iostream>

using namespace std;

int main() {

	int n = 169;

	int i = 2;
	int j = 5;

	int m1 = -1 << (j + 1);
	int m2 = (1 << i) - 1;

	int mask = m1 | m2;

	cout << (n & mask) << endl;

	return 0;
}