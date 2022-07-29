//Concise code 
bool isloop(struct Node *head) {
struct Node *slow , *fast ; 
if(head==NULL && head->next==NULL) return false;
slow = head = head ;
while(fast!=NULL && fast->next!=NULL) {
	slow=slow->next ; 
	fast=fast->next->next ;
	if(slow==fast) return true;
}
return false  ; 
}

//byhashing
bool detectLoop(Node* h)
    {
   unordered_set<Node*> s;
    while (h != NULL) {
        if (s.find(h) != s.end())
            return true;
        s.insert(h) ;
        h = h->next;
    } return false;
} 

//detect length of loop 
//Function to find the length o0f a loop in the linked list.
int length(Node *list) {
    struct Node * temp = list ; int len=1 ;   
    while(temp->next!=list) {len++ ; temp=temp->next ;}  return len ;
}
//from this i will get the address of slow and then i will simply put a while loop and wiil find len untill slow will encounter ;
int countNodesinLoop(struct Node *head)
{
    Node *slow = head , *fast =head  ; 
    if(head==NULL or head->next==NULL) return 0 ; 
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next ; 
        fast=fast->next->next ;
        if(return length(slow);
    } return 0 ;