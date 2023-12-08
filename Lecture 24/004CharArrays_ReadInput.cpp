// n <= 100

#include<iostream>

using namespace std;

void readString(char str[], char dlim = '\n') { // char* str

	char ch;
	int i = 0;

	while (true) {

		ch = cin.get();
		if (ch == dlim) {
			break;
		}

		str[i] = ch;
		i++;

	}

	str[i] = '\0';

}

int main() {

	char str[101];

	cout << "Enter a string : ";

	// cin >> str;

	// readString(str, '$');

	// cout << "You've entered : " << str << endl;

	// readString(str);

	// cin.getline(str, 101, '$');

	// cin.getline(str, 101);

	cin.getline(str, 5, '$');

	cout << "You've entered : " << str << endl;

	return 0;
}