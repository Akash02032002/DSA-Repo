class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode *dummy = root; 
       if(root==NULL) return root; 
        if(root->val == key && root->left==NULL && root->right==NULL ) return NULL ;
        if(root->val==key) return helper(root);
       while(root!=NULL) {
           if(root->val>key) {
               if(root->left!=NULL && root->left->val==key) 
                   {root->left =helper(root->left);break ;}
               else root=root->left ;
           }
          else {
              if(root->right!=NULL && root->right->val==key){
                  root->right = helper(root->right) ; break; 
              }
              else root=root->right ; 
          } 
           
       }
        return dummy ;
    }
    TreeNode* helper(TreeNode *root){
        if(root->left==NULL ) return root->right ; else if (root->right==NULL ) return root->left ;
       TreeNode* rightchild=root->right ; 
       TreeNode* rootleftRight =findrootleftRight(root->left) ;
        rootleftRight->right = rightchild ;
        return root->left ;
        
    }
    TreeNode *findrootleftRight(TreeNode *root){
        if(root->right==NULL) return root ;
        else return findrootleftRight(root->right) ;
    }
};