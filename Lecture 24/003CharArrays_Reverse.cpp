#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void reverseString(char str[]) { // char* str

	int n = strlen(str);

	int i = 0;
	int j = n - 1;

	while (i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}

}

int main() {

	char str[] = "hello";

	cout << "Original string : " << str << endl;

	// reverseString(str);

	int n = strlen(str);

	// reverse(str, str + n);

	reverse(str + 1, str + 4); // [1, 4)

	cout << "Reversed  string after 1st reverse : " << str << endl;


	return 0;
}