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

int numCameras = 0;

int helper(TreeNode* root) {

	// base case

	if (root == NULL) {
		return 1;
	}

	// recursive case

	int leftStatus = helper(root->left);
	int rightStatus = helper(root->right);

	// should you install a camera at the root node ?

	if (leftStatus == 2 || rightStatus == 2) {

		// install camera at the root node

		numCameras++;
		return 0;

	}

	// do not install a camera at the root node

	return leftStatus == 0 || rightStatus == 0 ? 1 : 2;


}

int minCameraCover(TreeNode* root) {

	int status = helper(root);

	if (status == 2) {
		// root is not yet covered, install a camera at the root node
		numCameras++;
	}

	return numCameras;

}

int main() {

	TreeNode* root = NULL;

	// root = new TreeNode(0);

	// root->left = new TreeNode(0);
	// root->left->left = new TreeNode(0);
	// root->left->right = new TreeNode(0);

	// cout << minCameraCover(root) << endl;

	// root = new TreeNode(0);

	// root->left = new TreeNode(0);
	// root->left->left = new TreeNode(0);
	// root->left->left->left = new TreeNode(0);
	// root->left->left->left->right = new TreeNode(0);

	// cout << minCameraCover(root) << endl;

	// root = new TreeNode(0);

	// root->left = new TreeNode(0);
	// root->left->left = new TreeNode(0);
	// root->left->right = new TreeNode(0);

	// root->right = new TreeNode(0);
	// root->right->left = new TreeNode(0);
	// root->right->right = new TreeNode(0);

	// cout << minCameraCover(root) << endl;

	TreeNode* newRoot = new TreeNode(0);

	root = new TreeNode(0);

	newRoot->left = root;

	root->left = new TreeNode(0);
	root->left->left = new TreeNode(0);
	root->left->right = new TreeNode(0);

	root->right = new TreeNode(0);
	root->right->left = new TreeNode(0);
	root->right->right = new TreeNode(0);

	cout << minCameraCover(newRoot) << endl;


	return 0;
}