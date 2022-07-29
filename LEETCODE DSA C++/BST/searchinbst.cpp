//https://leetcode.com/problems/search-in-a-binary-search-tree/
TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* p=root ;
        while(p!=NULL && p->val!=val) {
            if (p->val>val )  {p=p->left ;} 
            else p=p->right ;
        }
        return p; 
    }