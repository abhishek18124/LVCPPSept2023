#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(char a, char b) {

	// return true if you want a to be ordered before b in the sorted sequence

	if (a > b) {

		return true;

	}

	return false;

}

int main() {

	string s = "xabcyz";

	sort(s.begin(), s.end());

	cout << s << endl;

	greater<char> obj; // obj is a variable of type greater<char> or obj is an object of the greater<char> class
	// obj is a functor i.e. a function object

	// sort(s.begin(), s.end(), obj);

	// sort(s.begin(), s.end(), greater<char>());

	sort(s.begin(), s.end(), compare); // &compare

	cout << s << endl;

	return 0;
}