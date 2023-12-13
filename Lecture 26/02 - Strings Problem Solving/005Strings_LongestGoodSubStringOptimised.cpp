#include<iostream>
#include<string>

using namespace std;

// time : O(n)

int longestGoodSubstring(const string& str) {

	int cnt = 0;
	int maxSoFar = 0;

	for (char ch : str) {

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

			cnt++;
			maxSoFar = max(maxSoFar, cnt);

		} else {

			cnt = 0;

		}

	}

	return maxSoFar;

}

int main() {

	string str = "cbaeicdeiou";

	cout << longestGoodSubstring(str) << endl;

	return 0;
}