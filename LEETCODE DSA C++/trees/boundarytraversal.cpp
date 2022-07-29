vector<int> lefttraversal(Node *root , vector<int>res) {
    Node *p=root;
    res.push_back(p->val) ;
    if(p==NULL) return ;
    if(p->left!=NULL) lefttraversal(p->left , res) ;
    else lefttraversal(p->right ,res) ;
}