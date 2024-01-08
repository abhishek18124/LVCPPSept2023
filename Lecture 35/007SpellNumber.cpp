#include<iostream>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                         "eight", "nine"
                       };

void f(int n) {

	// base case

	if (n == 0) {
		return;
	}

	// recursive case

	// 1. first, ask your friend to spell the digits of n/10

	f(n / 10);

	// 2. now spell the rightmost digit

	int d = n % 10;

	cout << spellingMap[d] << " ";

}

int main() {

	int n = 132;

	f(n);

	return 0;
}