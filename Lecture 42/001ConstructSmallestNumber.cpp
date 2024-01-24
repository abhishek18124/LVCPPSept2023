#include<iostream>

using namespace std;

bool used[10] = {false}; // to track the digits used in the construction of the
// smallest number corresponding to the given pattern.

string minSoFar = "999999999";

void construct(string pattern, string& num, int i) {

	// base case

	if (num.size() == pattern.size() + 1) { // i == pattern.size()
		minSoFar = min(minSoFar, num);
		// cout << num <<  endl;
		return;
	}

	// recursive case

	// decide the next digit of 'num'

	if (num == "") {
		// decide the 1st digit
		for (int d = 1; d <= 9; d++) {
			num.push_back(d + '0');
			used[d] = true;
			construct(pattern, num, i);
			num.pop_back(); // backtracking
			used[d] = false; // backtracking
		}

	} else {
		int x = num.back() - '0'; // num[num.size()-1] - '0'
		if (pattern[i] == 'I') {
			// next digit should be > x
			for (int d = x + 1; d <= 9; d++) {
				if (used[d] == false) {
					num.push_back(d + '0');
					used[d] = true;
					construct(pattern, num, i + 1);
					num.pop_back(); // backtracking
					used[d] = false; // backtracking
				}
			}

		} else { // pattern[i] == 'D'

			// next digit should be < x
			for (int d = 1; d <= x - 1; d++) {
				if (used[d] == false) {
					num.push_back(d + '0');
					used[d] = true;
					construct(pattern, num, i + 1);
					num.pop_back(); // backtracking
					used[d] = false; // backtracking
				}
			}

		}
	}
}

int main() {

	string pattern = "IID";
	string num = "";

	construct(pattern, num, 0);

	cout << minSoFar << endl;

	return 0;
}