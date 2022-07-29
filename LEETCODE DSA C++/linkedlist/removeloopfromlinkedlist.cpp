void removeLoop(Node* head)
    {
        Node* slow , *fast; slow=fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next ; fast=fast->next->next ;
            if(slow==fast) break;}  //find loop there 
    
    if(slow==head and fast==head){  //base case when slow and fast both pointing on head int this case 
        while(fast->next!=slow) {  //just fixed slow and move fast till fast next not equal to slow 
            fast=fast->next; 
        }
        fast->next=NULL; 
    }
    else if(slow==fast) {  //slow next is not equal to fast next till check once got that means we got fast->next location and put null ;
        slow=head ;
        while(slow->next!=fast->next){slow=slow->next ; fast=fast->next ;}fast->next=NULL ;  
    }
    }

    //by hashing 
    ListNode *detectCycle(ListNode *head) {
         unordered_map<ListNode* ,int > mp ; 
       ListNode *q=NULL, *p=head ;
        while(p!=NULL) {
            if(mp.find(p)==mp.end()) { mp[p]++ ; q=p ; p=p->next ;}
            else {return q->next ;}
        }
        return NULL ;}