 //https://leetcode.com/problems/diameter-of-binary-tree/
 int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0  ; 
        height(root,diameter) ;
        return diameter ;
    }
    
    public:
    int height(TreeNode * root,int &diameter   ) {
        if(root==NULL) return 0 ; 
        int lh=height(root->left , diameter ) ;
        int rh=height(root->right , diameter ) ;
        diameter = max(diameter , lh+rh ) ; 
        return 1+ max(lh , rh ) ;
    }