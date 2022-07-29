//concatation
void concatenate(struct Node *p , struct Node *q) {
	third = p ;
	while (p->next != NULL) {
		p = p->next ;
	}
	p->next = q ;
}


int main(){
    concatenate(first,second) ;
}