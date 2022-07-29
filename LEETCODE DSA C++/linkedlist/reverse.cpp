  //THIS IS TWO POINTER METHOD FOR REVERSING LINKED LIST WE CAN ALSO DO THIS BY RECURSIVELY     
    ListNode* reverseList(ListNode* Head) {
     ListNode *p =Head ;
     ListNode *q ,*r ;
    q=r=NULL;
    while(p!=NULL){
      r=q;q=p;p=p->next ;q->next = r;  
    }
        Head =q; 
        return q ;
    }


    //RECURSIVELY METHOD 
