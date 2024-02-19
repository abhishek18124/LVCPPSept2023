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

TreeNode* buildTree() {

	int val;
	cin >> val;

	// base case

	if (val == -1) {
		// construct an empty tree and return pointer to its root TreeNode
		return NULL;
	}

	// recursive case

	// 1. construct the root val using the first value of the given preOrder traversal

	TreeNode* root = new TreeNode(val);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();

	return root;

}

string helper(TreeNode* root) {

	// base case

	if (root == NULL) {

		// tree is empty

		return "";

	}

	// recursive case

	// 1. ask your friend to find the string repr. of the leftSubtree

	string leftRepr = helper(root->left);

	// 2. ask your friend to find the string repr. of the rightSubtree

	string rightRepr = helper(root->right);

	// 3. build the string repr. of the given tree

	if (root->left != NULL and root->right != NULL) {

		return to_string(root->val) + "(" + leftRepr + ")(" + rightRepr + ")";

	} else if (root->left != NULL) {

		return to_string(root->val) + "(" + leftRepr + ")";

	} else if (root->right != NULL) {

		return to_string(root->val) + "()(" + rightRepr + ")";

	}

	// root->left == NULL and root->right == NULL

	return to_string(root->val);

}


int main() {

	TreeNode* root = buildTree();
	cout << helper(root) << endl;

	return 0;
}