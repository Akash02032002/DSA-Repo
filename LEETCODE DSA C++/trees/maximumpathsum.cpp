https://leetcode.com/problems/binary-tree-maximum-path-sum/
 int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN; 
        maxi1(root , maxi)  ; return maxi ;
    }
    
   public : 
    int maxi1(TreeNode * root , int &maxi ) {
        
         if(root==NULL) return 0 ; 
        int leftsum = max(0,maxi1(root->left , maxi)) ; 
        int rightsum = max(0,maxi1 (root->right , maxi)) ; 
        maxi = max(maxi , leftsum+rightsum+root->val) ;
        return root->val + max(leftsum , rightsum) ; 
    }