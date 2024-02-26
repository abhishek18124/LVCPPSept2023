#include<iostream>
#include<vector>
#include<climits>

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

class Data {
public :
    int sum;
    int minVal;
    int maxVal;
    bool isBst;
    int maxBSTSum;
};

Data helper(TreeNode* root) {

    Data d;

    // base case

    if (root == NULL) {
        d.isBst = true;
        d.minVal = INT_MAX;
        d.maxVal = INT_MIN;
        d.sum = 0;
        d.maxBSTSum = 0;
        return d;
    }

    // recursive case

    Data left  = helper(root->left);
    Data right = helper(root->right);

    // check if the given tree is a BST

    d.isBst = left.isBst and right.isBst and root->val > left.maxVal and root->val < right.minVal;
    d.minVal = min(left.minVal, min(right.minVal, root->val));
    d.maxVal = max(left.maxVal, max(right.maxVal, root->val));
    d.sum = left.sum + right.sum + root->val;

    if (d.isBst) {
        d.maxBSTSum = max(left.maxBSTSum, max(right.maxBSTSum, d.sum));
    } else {
        d.maxBSTSum = max(left.maxBSTSum, right.maxBSTSum);
    }

    return d;

}


int maxSumBST(TreeNode* root) {

    Data d = helper(root);
    return d.maxBSTSum;

}


int main() {

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(4);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(3);

    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(5);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(6);

    cout << maxSumBST(root) << endl;

    return 0;
}