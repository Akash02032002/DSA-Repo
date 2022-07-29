//https://leetcode.com/problems/path-sum-ii/
vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        vector<int>path ; vector<vector<int>>paths; 
        temppath(root,targetsum,path,paths);
        return paths ;
        
    }
    
   void temppath(TreeNode*root ,int sum , vector<int>&path, vector<vector<int>>&paths) {
        if(root==NULL) return ; 
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL && sum==root->val) paths.push_back(path) ;
        temppath(root->left ,sum-root->val , path, paths ) ; 
       temppath(root->right , sum-root->val , path , paths) ;
       path.pop_back();
        
    }