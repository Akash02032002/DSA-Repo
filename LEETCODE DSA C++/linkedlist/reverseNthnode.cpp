     //https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
     ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * slow = head;
        ListNode * fast = head;
        int count = n;
        
        while(count > 0)
        {
            fast = fast->next; count--;
        }
        if(fast == NULL) return head->next; // edge case handled
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next; fast=fast->next;
        }
        slow->next = slow->next->next;

        return head;
    
    }

    //INT THIS PROGRAM I AM GOING TO FIRST REVERSE THE LINKED  THEN CHECK FROM STARTING 
int getNode(SinglyLinkedListNode* p, int positionFromTail) {
SinglyLinkedListNode *q, *r ,*first;
    q = r = NULL;
    while (p != NULL) {
        r = q; q = p; p = p->next; q->next = r;
    }
    first=q ;
    for(int i=0 ;i<positionFromTail ; i++){first=first->next;}
    return first->data;
}