/*
	https://leetcode.com/problems/find-duplicate-subtrees/
*/

class Solution {

	set<TreeNode*> s;
	unordered_map<string, TreeNode*> m;

public:

	string dfs(TreeNode* root) {

		// base case

		if (root == NULL) {
			return "-";
		}

		// recursive case

		string leftRepr = dfs(root->left);
		string rightRepr = dfs(root->right);

		string treeRepr = to_string(root->val) + "*" + leftRepr + "*" + rightRepr;

		if (m.find(treeRepr) != m.end()) {

			// you've seen this treeRepr before

			s.insert(m[treeRepr]);

		} else {

			// you are seeing this treeRepr for the 1st time

			m[treeRepr] = root;

		}

		return treeRepr;

	}

	vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {

		dfs(root); // treeRepr returned by dfs() is of no-use here

		return vector<TreeNode*>(s.begin(), s.end());

	}
};