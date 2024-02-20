#include<iostream>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

bool helper(TreeNode* root, int targetSum) {

	// base case

	if (root == NULL) {

		// tree is empty

		return false;

	}

	if (root->left == NULL and root->right == NULL) {

		// you are at the leaf node

		if (root->val == targetSum) {

			// you've found a root-to-leaf path in the given tree whose sum is equal to targetSum

			return true;

		}

		// you've not yet found a root-to-leaf path in the given tree whose sum is equal to targetSum

		return false;

	}

	// recursive case

	// check if there exists a root-to-leaf path in the given tree whose sum is equal to targetSum

	// 1. recursively, check if there exists a root-to-leaf path in the leftSubtree whose sum is equal to targetSum-root->val

	// 2. recursively, check if there exists a root-to-leaf path in the rightSubtree whose sum is equal to targetSum-root->val

	return helper(root->left, targetSum - root->val) or helper(root->right, targetSum - root->val);

}

bool hasPathSum(TreeNode* root, int targetSum) {

	return helper(root, targetSum);

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(5);

	root->left = new TreeNode(4);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);

	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	int targetSum = 22;

	hasPathSum(root, targetSum) ? cout << "true" << endl :
	                                   cout << "false" << endl;

	return 0;
}