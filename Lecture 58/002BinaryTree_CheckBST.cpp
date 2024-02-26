/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

int findMinimumIterative(TreeNode* root) {

	if (root == NULL) {
		// tree is empty
		return INT_MAX;
	}

	TreeNode* temp = root;
	while (temp->left != NULL) {
		temp = temp->left;
	}

	return temp->val;

}

int findMaximumIterative(TreeNode* root) {

	if (root == NULL) {
		// tree is empty
		return INT_MIN;
	}

	TreeNode* temp = root;
	while (temp->right != NULL) {
		temp = temp->right;
	}

	return temp->val;

}


bool isBST(TreeNode* root) {

	// base case
	if (root == NULL) {
		return true;
	}

	// recursive case

	// 1. recursively, check if the leftSubtree is a BST or not
	bool leftIsBst = isBST(root->left);

	// 2. recursively, check if the rightSubtree is a BST or not
	bool rightIsBst = isBST(root->right);

	// 3. check if the BST prop. is satisfied at the root node
	bool rootIsBst = root->val > findMaximumIterative(root->left) and root->val < findMinimumIterative(root->right) ? true : false;

	return leftIsBst and rightIsBst and rootIsBst;

}

class triple {
public:

	bool bst;
	int minVal;
	int maxVal;

};

// time : O(n)

triple isBSTEfficient(TreeNode* root) {

	triple t;

	// base case

	if (root == NULL) {
		t.bst = true;
		t.minVal = INT_MAX;
		t.maxVal = INT_MIN;
		return t;
	}

	// recursive case

	// 1. recursively, check if the leftSubtree is a BST or not and compute its minVal and maxVal
	triple left = isBSTEfficient(root->left);

	// 2. recursively, check if the rightSubtree is a BST or not and compute its minVal and maxVal
	triple right = isBSTEfficient(root->right);

	// 3. check if the BST prop. is satisfied at the root node
	bool rootIsBst = root->val > left.maxVal and root->val < right.minVal ? true : false;

	t.bst = left.bst and right.bst and rootIsBst;
	t.minVal = min(left.minVal, min(right.minVal, root->val));
	t.maxVal = max(left.maxVal, max(right.maxVal, root->val));

	return t;

}

// time : O(n)

bool isBSTEfficientRange(TreeNode* root, long long lb, long long ub) {

	// base case
	if (root == NULL) {
		return true;
	}

	// recursive case

	return root->val > lb and root->val < ub and
	       isBSTEfficientRange(root->left, lb, root->val) and
	       isBSTEfficientRange(root->right, root->val, ub);

}

int main() {

	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(0);

	isBST(root) ? cout << "true" << endl : cout << "false" << endl;

	triple t = isBSTEfficient(root);

	t.bst ? cout << "true" << endl : cout << "false" << endl;

	// long long lb = (long long)INT_MIN - 1;
	// long long ub = (long long)INT_MAX + 1;

	long long lb = LLONG_MIN; // -2^63
	long long ub = LLONG_MAX; // 2^63 - 1

	isBSTEfficientRange(root, lb, ub) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}