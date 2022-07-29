    //FIRST FIND LENGHT THEN MIDDLE NODES ;
    ListNode* middleNode(ListNode* head) {
           
      ListNode * mid ;
        for(int i=0 ; i<count(head)/2 ;i++){mid=mid->next ;}
        return mid;
    }
    int count(ListNode *head){ int cnt =0 ;
        while(head!=NULL){
            cnt++;
            head=head->next ;} 
                            return cnt ;
    }

    //IN THIS APPROACH WE CAN MOVE ONE POINTER BY DOUBLE SO THAT IF ONE CAN COMPLETE ONE INTERATION OTHER WILL IN MIDDLE 
     ListNode* middleNode(ListNode* head) {
     ListNode * p, *q; 
        p=q=head ;
        while(p!=NULL){
            p=p->next;
            if(p!=NULL) {p=p->next;
            q=q->next; }
        }
        return q; 
    }