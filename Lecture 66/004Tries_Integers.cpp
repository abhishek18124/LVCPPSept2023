/*

Implementation of the TRIE data structure to store non-negative integers.

Assume integer has 32-bit representation.

*/

#include<iostream>

using namespace std;

class node {

public:
	
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	
	node() {
		this->left = NULL;
		this->right= NULL;
	}
};


class trie {
	
	node* root;

	public :

		trie() {
			root = new node();
		}

		void insert(int n) {
			// todo ...
		}

		bool search(int n) {
			// todo ...
		}
};

int main() {

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	trie t;
	for(int i=0; i<n; i++) {
		t.insert(arr[i]);
	}

	int brr[] = {1, 2, 5, 10, 25, 0};
	int m = sizeof(brr) / sizeof(int);

	for(int i=0; i<m; i++) {
    	t.search(brr[i]) ? cout << brr[i] << " is present" << endl :
    	                   cout << brr[i] << " is absent" << endl;
    }

    cout << endl;

	return 0;
}