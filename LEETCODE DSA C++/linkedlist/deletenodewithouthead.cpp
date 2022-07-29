  //https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/
 // this will work if we are not deleting tail node ; otherwise we have to put some if else statement  ;
  
  void deleteNode(ListNode* node) {
       node->val = node->next->val ;
    node->next = node->next->next ;
    }
