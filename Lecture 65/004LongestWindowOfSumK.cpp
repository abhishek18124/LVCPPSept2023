#include<iostream>

using namespace std;

int main() {

	int arr[] = {2, 3, 2, 4, 0, 2, 0};
	int n = sizeof(arr) / sizeof(int);
	int k = 6;

	int i = 0; // to store the start of the window
	int j = 0; // to store the end of the window

	int sum = 0; // to store the window sum
	
	int max_len = 0; // to track the length of the longest
	                 // window which has a sum equals to k 

	while(j < n) {

		// expand the window

		// check for the violation of the window property
		
		// check for the validity of the window, and update the answer

		// continue expansion of the window
		
	}

	cout << max_len << endl;

	return 0;
}