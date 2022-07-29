//https://leetcode.com/problems/invert-binary-tree/
TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL ;
      swap(root->left , root->right) ;
        invertTree(root->left) ;
        invertTree(root->right) ;
        return root; 
    }