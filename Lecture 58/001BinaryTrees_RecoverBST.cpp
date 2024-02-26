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

void printInOrder(TreeNode* root) {

    // base case

    if (root == NULL) {
        return;
    }

    // recursive case

    // 1. recursively, print the inOrder traversal of the leftSubtree

    printInOrder(root->left);

    // 2. process the root node

    cout << root->val << " ";

    // 3. recursively, print the inOrder traversal fo the rightSubtree

    printInOrder(root->right);

}

void recoverTree(TreeNode* root) {

    // todo ...

}



int main() {

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(1);

    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);

    // recoverTree(root);

    printInOrder(root);

    return 0;
}