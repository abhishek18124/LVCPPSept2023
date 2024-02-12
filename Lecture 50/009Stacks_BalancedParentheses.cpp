#include<iostream>
#include<stack>

using namespace std;

bool isBalanced(string str) {
	// todo ...
}

int main() {

	string str = "([{}])";

	isBalanced(str) ? cout << "balanced!" << endl :
	                  cout << "not balanced!" << endl;

	return 0;
}