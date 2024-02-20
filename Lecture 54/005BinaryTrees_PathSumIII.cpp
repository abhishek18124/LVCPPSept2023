#include<iostream>
#include<vector>

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

int countPaths(TreeNode* root, int targetSum) {

	// base case

	if (root == NULL) {
		// tree is empty
		return 0;
	}

	// recursive case

	// count the no. of paths in the given that start at the root and whose sum is equal to targetSum

	int count = 0;

	if (root->val == targetSum) {
		// you've found a path from root to root whose sum is equal to targetSum
		count++;
	}

	// 1. recursively, count the no. of paths in the leftSubtree that start at the root and whose sum is equal to targetSum-root->val

	count += countPaths(root->left, targetSum - root->val);

	// 2. recursively, count the no. of paths in the rightSubtree that start at the root and whose sum is equal to targetSum-root->val

	count += countPaths(root->right, targetSum - root->val);


	return count;

}


int helper(TreeNode* root, int targetSum) {

	// base case

	if (root == NULL) {
		return 0;
	}

	// recursive case

	// count the no. of paths in the given tree whose sum is equal to targetSum

	// 1. count the no. of paths in the given tree that start at the root node and whose sum is equal to targetSum

	int x = countPaths(root, targetSum);

	// 2. count the no. of paths in the given tree that do not start at the root node and whose sum is equal to targetSum

	// 2.1 recursively, count the no. of paths in the leftSubtree whose sum is equal to targetSum

	int y = helper(root->left, targetSum);

	// 2.2 recursively, count the no. of paths in the rightSubtree whose sum is equal to targetSum

	int z = helper(root->right, targetSum);

	return x + y + z;

}


int pathSum(TreeNode* root, int targetSum) {

	return helper(root, targetSum);

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left = new TreeNode(3);
	root->left->left->left = new TreeNode(3);
	root->left->left->right = new TreeNode(-2);
	root->left->right = new TreeNode(2);
	root->left->right->right = new TreeNode(1);

	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	int targetSum = 8;

	cout << pathSum(root, targetSum) << endl;

	return 0;
}