//Recursively 
class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int res =-1 ; int cnt=0 ; 
    int KthSmallestElement(Node *root, int k) {
        // add code here.
        
      helper(root , k ) ;
        return res ;
        
    }
    void helper(Node *node , int k ){
        if(node==NULL) return; 
        helper(node->left ,k  ) ;
        cnt++ ; if(cnt== k ) res = node->data ;
        helper(node->right , k ) ;
    }
};


//By inorder Traversal 
int KthSmallestElement(Node *root, int k) {
        // add code here.
        int cnt =0  ;  stack <Node *> st ;
        struct Node* node = root ;
        while(true) {
            if(node!=NULL) {
                st.push(node);
                node=node->left ;
            }
            else {
                if(st.empty()) break;
                node = st.top(); st.pop();
                cnt++ ; 
                if(cnt==k) return node->data; node=node->right ;
            }
        }
        return -1 ;
    }