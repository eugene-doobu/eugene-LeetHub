/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
	 void searchTree(TreeNode* node, vector<int>* rst) {
		 if (node == nullptr) return;
		 if (node->left != nullptr) {
			 searchTree(node->left, rst);
		 }
		 rst->push_back(node->val);
		 if (node->right != nullptr) {
			 searchTree(node->right, rst);
		 }
	 }

 public:
	 vector<int> inorderTraversal(TreeNode* root) {
		 vector<int> rst;
		 searchTree(root, &rst);
		 return rst;
	 }
 };