/*

Given an array of non-negative integers, find the maximum subarray XOR.

Example:
	Input : x[] = {25, 10, 2, 8, 5, 3}
	Output:

*/

#include<iostream>
#include<climits>

using namespace std;

class node {
public:

	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1

	node() {
		this->left = NULL;
		this->right = NULL;
	}
};

class trie {

	node* root;

public:

	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31; i >= 0; i--) {
			int bit = (1 << i)&n;
			if (!bit) {
				// ith bit of n is 0, check if temp node has a left child or not
				if (!temp->left) {
					node* n = new node();
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of n is 1, check if temp node has a right child or not
				if (!temp->right) {
					node* n = new node();
					temp->right = n;
				}
				temp = temp->right;
			}
		}
	}

	int helper(int n) {
		// find the maximum possible xor involving 'n' in just a single xor operation with the help of trie

		node* cur = root;
		int ans = 0;

		for (int i = 31; i >= 0; i--) {

			int ithBit = (n >> i) & 1;

			if (ithBit == 0) {

				if (cur->right != NULL) {

					// ith bit of ans can be set

					ans += (1 << i);
					cur = cur->right;

				} else {

					// ith bit of the ans cannot be set

					cur = cur->left;

				}

			} else {

				// ithBit == 1

				if (cur->left != NULL) {

					// ith bit of ans can be set

					ans += (1 << i);
					cur = cur->left;

				} else {

					// ith bit of the ans cannot be set

					cur = cur->right;

				}

			}


		}

		cout << n << " ^ " << (n ^ ans) << " = " << ans << endl;

		return ans;
	}

	// time : n.32 ~ O(n) assuming n >>> 32
	// space: O(n) due to trie

	int maximumXOR(int x[], int n) {
		int maxSoFar = 0;
		for (int i = 0; i < n; i++) {
			maxSoFar = max(maxSoFar, helper(x[i]));
		}
		return maxSoFar;
	}
};


int helperBruteForce(int arr[], int n) {

	// brute-force approach - time : O(n^3) space : O(1)

	int maxXOR = 0; // to track the maximum subarray XOR

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			// compute the xor of arr[i...j]
			int XOR = 0;
			for (int k = i; k <= j; k++) {
				XOR ^= arr[k];
			}
			maxXOR = max(maxXOR, XOR);
		}
	}

	return maxXOR;

}

int helperUsingCXOR(int arr[], int n) {

	// time : O(n^2)

	int cxor[n + 1];
	cxor[0] = 0;
	for (int i = 1; i <= n; i++) {
		cxor[i] = cxor[i - 1] ^ arr[i - 1];
	}


	int maxXOR = 0; // to track the maximum subarray XOR

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			// compute the xor of arr[i...j]
			int XOR = cxor[j + 1] ^ cxor[i];
			maxXOR = max(maxXOR, XOR);
		}
	}

	return maxXOR;
}

// time : O(n)
// space: O(n) due to cxor[] and trie

int helperUsingTrie(int arr[], int n) {

	int cxor[n + 1];
	cxor[0] = 0;
	for (int i = 1; i <= n; i++) {
		cxor[i] = cxor[i - 1] ^ arr[i - 1];
	}


	trie t;
	for (int i = 0; i <= n; i++) {
		t.insert(cxor[i]);
	}

	return t.maximumXOR(cxor, n + 1);

}

int main() {

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	cout << helperBruteForce(arr, n) << endl;

	cout << helperUsingCXOR(arr, n) << endl;

	cout << helperUsingTrie(arr, n) << endl;


	return 0;
}