#include<iostream>

using namespace std;

int main() {

	cout << max(2, 5) << endl;
	cout << min(2, 5) << endl;

	cout << max(2, max(3, 5)) << endl;
	cout << max({2, 3, 5}) << endl;

	cout << min(2, min(3, 5)) << endl;
	cout << min({2, 3, 5}) << endl;

	long long x = 100;
	int y = 50;

	cout << max(x, (long long)y) << endl;

	return 0;
}