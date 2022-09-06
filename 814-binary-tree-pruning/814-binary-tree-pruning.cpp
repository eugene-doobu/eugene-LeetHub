 class Solution { // hello
	 bool searchTree(TreeNode* node) {
         if(node == nullptr) return false;
		 if (node->left != nullptr) {
			 if(!searchTree(node->left)){
                 node->left = nullptr;
             }
		 }
		 if (node->right != nullptr) {
			 if(!searchTree(node->right)){
                 node->right = nullptr;
             }
		 }
		 if (node->left == nullptr && node->right == nullptr && node->val == 0) {
			 node = nullptr;
             return false;
		 }
         return true;
	 }

 public:
	 TreeNode* pruneTree(TreeNode* root) {
		 searchTree(root);
		 if (root->left == nullptr && root->right == nullptr && root->val == 0) {
             return nullptr;
		 }
		 return root;
	 }
 };