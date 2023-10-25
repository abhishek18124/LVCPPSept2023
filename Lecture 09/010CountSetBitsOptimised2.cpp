#include<iostream>

using namespace std;

int main() {

	int n = 12;
	int cnt = 0; // to track the no. of set bits in 'n'

	// #times loop runs = no. of set bits in 'n'

	while (n > 0) {

		cnt++;
		n = n & (n - 1);

	}

	cout << cnt << endl;

	return 0;
}