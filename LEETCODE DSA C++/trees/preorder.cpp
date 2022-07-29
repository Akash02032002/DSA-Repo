 vector<int> preorderTraversal(TreeNode* root) {
       stack<TreeNode * > st ; vector<int>pre; 
        if(root==NULL) return pre;
       st.push(root) ;
      TreeNode * node ;  
      while(!st.empty()) {
          node=st.top() ;
          st.pop() ;
          pre.push_back(node->val) ;
           if(node->right) st.push(node->right) ;
          if(node->left) st.push(node->left) ;
         
      }return pre;  
    }

    //RECURSIVE 
    void prorder(Node * root ) {]
    if(root!=NULL) {
        cout<<root->data ; 
        root= root - >left ;
        root=root->right ;
    }
    }