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

TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q) {

	// base case

	if (root == NULL) {
		return NULL;
	}

	if (root->val == p->val || root->val == q->val) {
		return root;
	}

	// recursive case

	TreeNode* left = helper(root->left, p, q);
	TreeNode* right = helper(root->right, p, q);

	if (left != NULL and right != NULL) {
		return root;
	} else if (left != NULL) {
		return left;
	} else if (right != NULL) {
		return right;
	}

	return NULL;

}


TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

	return helper(root, p, q);

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(3);

	root->left = new TreeNode(5);
	root->left->left = new TreeNode(6);
	root->left->right = new TreeNode(2);
	root->left->right->left = new TreeNode(7);
	root->left->right->right = new TreeNode(4);

	root->right = new TreeNode(1);
	root->right->left = new TreeNode(0);
	root->right->right = new TreeNode(8);

	return 0;
}