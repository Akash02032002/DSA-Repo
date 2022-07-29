Node* insert(Node* root, int key) {
    // Your code here
    if(root==NULL) return new Node(key) ;
    Node *node = root ;
    while(true) {
        if (node->data==key) break ;
        if(node->data<key)
        {
            if(node->right!=NULL) node = node->right ;
            else  {node->right = new Node(key) ;break;} 
        }
        else 
        { if(node->left!=NULL) node = node->left ;
            else { node->left = new Node(key) ; break; }}       
    }
    return node ;
}

//BY RECURSIVE 