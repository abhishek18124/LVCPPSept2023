#include<iostream>

using namespace std;

int main() {

	int x = 10;
	char* ptr1 = (char*)&x;

	char ch = 'A';
	int* ptr2 = (int*)&ch;

	return 0;
}