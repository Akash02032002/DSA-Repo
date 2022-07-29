Node* insert(Node* root, int key) {
    // Your code here 
    
    if(root==NULL) return new Node(key) ;
    if(root->data==key) return root ;
    if(root->data <key ) root->right = insert(root->right , key ) ;
    else {
        root->left = insert(root->left , key) ; 
    }
    return root ;
}