#include<iostream>

using namespace std;

int main() {

	int n = 304;

	int cnt = 0;
	int maxCntSoFar = 0;

	while (n > 0) {

		if ((n & 1) == 1) {
			cnt++;
			// maxCntSoFar = max(maxCntSoFar, cnt);
			if (cnt > maxCntSoFar) maxCntSoFar = cnt;
		} else {
			// 0th bit of 'n' is not set
			cnt = 0;
		}

		n = n >> 1;

	}

	cout << maxCntSoFar << endl;

	return 0;
}