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


void printPreOrder(TreeNode* root) {

	// base case
	if (!root) { // root == NULL
		cout << -1 << " ";
		return;
	}

	// recursive case

	// 1. process the root TreeNode
	cout << root->val << " ";

	// 2. do the preOrder traversal of the leftSubtree
	printPreOrder(root->left);

	// 3. do the preOrder traversal of the rightSubtree
	printPreOrder(root->right);

}

bool helper(TreeNode* root1, TreeNode* root2) {

	// base case

	if (root1 == NULL and root2 == NULL) {

		// both the trees are empty

		return true; // empty trees are flip equivalent

	}

	if (root1 == NULL) { // root2 != NULL

		return false;

	}

	if (root2 == NULL) { // root1 != NULL

		return false;

	}

	// root1 != NULL and root2 != NULL

	if (root1->val != root2->val) {

		// both the trees are not flip equivalent

		return false;

	}

	// recursive case

	// root1 != NULL and root2 != NULL and root1->val == root2->val

	// make a decision for the root node

	// option 1 : perform a flip operation on the root node of the 1st tree

	swap(root1->left, root1->right);

	if (helper(root1->left, root2->left) and helper(root1->right, root2->right)) {
		// root1 and root2 are flip equivalent
		return true;
	}

	// option 2 : donot perform a flip operation on the root node of the 1st tree

	swap(root1->left, root1->right); // backtracking

	if (helper(root1->left, root2->left) and helper(root1->right, root2->right)) {
		// root1 and root2 are flip equivalent
		return true;
	}

	// root1 and root2 are not flip equivalent
	return false;

}

int main() {

	TreeNode* root1 = buildTree();
	TreeNode* root2 = buildTree();

	helper(root1, root2) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}