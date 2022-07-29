    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> st ;
        TreeNode * node = root ; vector<int>in ;
        while(true) {
            if(node!=NULL)
            {st.push(node) ;
             node=node->left ;
             
            }
            else {
                if(st.empty()) break;
                node=st.top() ;
                st.pop();
                in.push_back(node->val) ;
                node=node->right ;
                
            }
            
            
        }
        return in ;
        
    }