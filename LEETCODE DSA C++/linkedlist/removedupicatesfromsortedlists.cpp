//THIS METHOD LOGIC IS SAME
 ListNode* deleteDuplicates(ListNode* head) {
      
        if(head==NULL) return head;
        ListNode* p=head ,*q=head->next ;
        while(q!=NULL){
            if(p->val!=q->val){
                p=q;q=q->next ;
            }
            else {p->next=q->next ; delete(q) ; q=p->next ;}
        }
        return head ;
    }

    //concise
     ListNode* deleteDuplicates(ListNode* head) {
      
        if(head==NULL) return head;
        ListNode* p=head;
        while(p->next!=NULL){
           if(p->val==p->next->val){p->next=p->next->next;}
            else{p=p->next ;}
        }
        return head ;
    }

     //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *first) 
    {
     set<int>s ; Node*p=first, *q=NULL;
     while(p!=NULL) {
     if(s.find(p->data)!=s.end()) {q->next = p->next ; delete(p) ; }
     else {q=p ;s.insert(p->data) ; } p=q->next ;
     }

     return first ;
    }