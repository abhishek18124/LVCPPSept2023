#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "coding";

	int cnt = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		cnt++;
	}

	cout << cnt << endl;

	cout << strlen(str) << endl;

	return 0;
}