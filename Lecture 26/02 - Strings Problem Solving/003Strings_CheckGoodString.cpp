#include<iostream>
#include<string>

using namespace std;

bool isGoodString(const string& str) {

	// for (int i = 0; str[i] != '\0'; i++) {

	// 	char ch = str[i];

	// 	if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

	// 		// ch is a consonant, str is not a good string

	// 		return false;

	// 	}

	// }

	for (char ch : str) {

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

			// ch is a consonant, str is not a good string

			return false;

		}

	}

	// str is a good string

	return true;

}

int main() {

	string str = "uoiea";

	isGoodString(str) ? cout << "good" << endl : cout << "not good" << endl;

	return 0;
}