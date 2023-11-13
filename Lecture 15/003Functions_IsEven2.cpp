#include<iostream>

using namespace std;

bool isEven(int n) {

	return n % 2 == 0;

}

int main() {

	bool answer = isEven(4);

	cout << answer << endl;

	cout << isEven(5) << endl;

	if (isEven(8)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	isEven(8) ? cout << "true" << endl : cout << "false" << endl;

	if (isEven(9)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	isEven(9) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}