 //https://leetcode.com/problems/minimum-depth-of-binary-tree/
 int minDepth(TreeNode* root) {
        TreeNode * node = root ;
    if(node==NULL) return 0 ;
      int lh=minDepth(node->left) ; 
      int rh =minDepth( node ->right) ;
        
        return 1+( (lh&&rh) ? min(lh,rh): max(lh,rh)) ;
         
    }