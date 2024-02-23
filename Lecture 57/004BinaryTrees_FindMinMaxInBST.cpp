/*

	Given a BST, design an algorithm to find the minimum and the maximum value inside it.

*/

#include<iostream>

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

TreeNode* findMinimumIterative(TreeNode* root) {

	if (root == NULL) {
		// tree is empty
		return NULL;
	}

	TreeNode* temp = root;
	while (temp->left != NULL) {
		temp = temp->left;
	}

	return temp;

}

TreeNode* findMaximumIterative(TreeNode* root) {

	if (root == NULL) {
		// tree is empty
		return NULL;
	}

	TreeNode* temp = root;
	while (temp->right != NULL) {
		temp = temp->right;
	}

	return temp;

}


TreeNode* findMinimumRecursive(TreeNode* root) {

	// base case

	if (root == NULL) {
		return NULL;
	}

	if (root->left == NULL) {
		// root pointer is pointing to the leftmost node of the given BST
		return root;
	}

	// recursive case

	// recursively, find the leftmost node of the leftsubtree

	// or

	// recursively, find the minimum value node in the leftsubtree

	return findMinimumRecursive(root->left);

}

// time ~ O(height)

TreeNode* findMaximumRecursive(TreeNode* root) {

	// base case

	if (root == NULL) {
		return NULL;
	}

	if (root->right == NULL) {
		// root pointer is pointing to the rightmost node of the given BST
		return root;
	}

	// recursive case

	// recursively, find the rightmost node of the rightsubtree

	// or

	// recursively, find the maximum value node in the rightsubtree

	return findMaximumRecursive(root->right);

}



int main() {
	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);
	root->left->left->right = new TreeNode(4);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);
	root->right->right->left = new TreeNode(16);

	// TreeNode* minTreeNode = findMinimumIterative(root);
	// TreeNode* minTreeNode = findMinimumRecursive(root);

	// minTreeNode ? cout << "minimum val : " << minTreeNode->val << endl :
	//                    cout << "tree is empty!" << endl;

	// TreeNode* maxTreeNode = findMaximumIterative(root);
	TreeNode* maxTreeNode = findMaximumRecursive(root);

	maxTreeNode ? cout << "maximum val : " << maxTreeNode->val << endl :
	                   cout << "tree is empty!" << endl;

	return 0;
}