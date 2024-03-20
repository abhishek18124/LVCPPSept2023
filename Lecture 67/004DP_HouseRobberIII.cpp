#include<iostream>
#include<unordered_map>

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

// recursive implementation

int helper(TreeNode* root) {

    // base case

    // todo ...

    // recursive case

    // todo ...

}

int rob(TreeNode* root) {

    return helper(root);

}

int main() {

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(2);
    root->left->right = new TreeNode(3);

    root->right = new TreeNode(3);
    root->right->right = new TreeNode(1);

    cout << rob(root) << endl;

    // TreeNode* root = new TreeNode(3);

    // root->left = new TreeNode(4);
    // root->left->left = new TreeNode(1);
    // root->left->right = new TreeNode(3);

    // root->right = new TreeNode(5);
    // root->right->right = new TreeNode(1);

    // cout << rob(root) << endl;

    return 0;
}