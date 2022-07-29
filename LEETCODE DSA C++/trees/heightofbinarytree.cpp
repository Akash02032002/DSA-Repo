//https://leetcode.com/problems/maximum-depth-of-binary-tree/
int maxDepth(TreeNode* p) {
        if(p==NULL) return 0 ; 
        int leftheight = maxDepth(p->left) ;
        int rightheight = maxDepth(p->right) ;
        
    return 1+ max(leftheight , rightheight) ;
        
    }