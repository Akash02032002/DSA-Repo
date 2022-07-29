//TRAVERSAL THROUGH EACH NODE AND CHECK 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p = headA;
     ListNode *q = headB;
    while(q!=NULL){
        p=headA;
        while(p!=NULL){
            if(q!=p) p=p->next ;    else return q ;}
        q=q->next ;   }
    return NULL;

    //by using hashing 
    







    //optimal 1
    //.first find length of both list compare if l2 is greater then shift head of l2 by l2-l1 vice verse then simultaneosly increased p and q
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p = headA;
     ListNode *q = headB;
        int l1 =0 ,l2=0; while(p!=NULL){l1++; p=p->next ;} while(q!=NULL){l2++ ;q=q->next ;} p=headA ;q=headB ;
        if((l2-l1)>0){for(int i=0 ;i<l2-l1 ;i++) q=q->next;}
        else {for(int i=0 ;i<l1-l2 ;i++) p=p->next;}
        while(p!=q){p=p->next ;q=q->next;}
        return p ;
    }
/*******************************************************************************************/
    //optimal 2
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p = headA;
     ListNode *q = headB;
      while(p!=q){
         if(p==NULL){p=headB;} else p=p->next ;
         if(q==NULL){q=headA;} else q=q->next ;
      }
    return p;
    }