 int kthLargest(Node *root, int k)
    {
        helper(root , k) ; return res ;
    }
    void helper (Node * node , int k ){
        if(node==NULL) return ; 
        helper(node->right , k ) ; 
        cnt++ ; 
        if(cnt==k) res = node->data ;
        helper(node->left , k ) ;
    }