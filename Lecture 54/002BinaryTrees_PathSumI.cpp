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

bool hasPathSum(TreeNode* root, int targetSum) {

	// todo ...

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