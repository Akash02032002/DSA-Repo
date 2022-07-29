 //https://leetcode.com/problems/balanced-binary-tree/
  bool isBalanced(TreeNode* root) {
        return height(root)!=-1 ;
    }
public : 
    int height(TreeNode * root ) {
    TreeNode * node = root ;
    if(node==NULL) return 0 ; 
        
      int lh=height(node->left) ; if(lh==-1) return -1 ;
      int rh = height ( node ->right) ; if(rh==-1) return -1 ; 
      if(abs(lh-rh)>1) return -1 ;
        
        return 1+ max(lh ,rh ) ;
        
         
    }