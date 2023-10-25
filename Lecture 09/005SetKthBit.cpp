#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 4;

	cout << (n | (1 << k)) << endl;

	int mask = 1 << k;

	cout << (n | mask) << endl;

	return 0;
}