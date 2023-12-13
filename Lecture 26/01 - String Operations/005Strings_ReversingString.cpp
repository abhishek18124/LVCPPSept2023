#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {

	string s = "abc";

	reverse(s.begin(), s.end());

	cout << s << endl;

	s = "abcdef";

	// reverse(s.begin() + 1, s.begin() + 4);

	reverse(s.begin() + 1, s.end() - 2);

	cout << s << endl;

	return 0;
}