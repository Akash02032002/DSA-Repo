  vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans ;
        if(root==NULL) return ans; 
        queue<TreeNode *> q ;
        q.push(root) ;
        while(!q.empty()){
            vector<int>level;
            int size=q.size() ;
            for(int i=0 ;i<size ;i++){
                TreeNode * p = q.front() ;
                q.pop();
                if(p->left!=NULL ){q.push(p->left);}
                if(p->right!=NULL) {q.push(p->right) ;}
                level.push_back(p->val) ;
            }
            ans.push_back(level) ;
            
        }
        return ans ;
    }