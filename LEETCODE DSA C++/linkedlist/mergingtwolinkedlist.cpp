//https://leetcode.com/problems/merge-two-sorted-lists/
#include<bits/stdc++.h>
using namespace std ;

struct Node {
	int data ;
	struct Node *next ;
} *first = NULL , *second = NULL , *third = NULL;
void Display(struct Node *first) {
	struct 	Node *p = first ;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}

void create(int A[] , int n) {
	struct Node*t, *last ; int i;
	first = new Node ; // first = (struct Node *) malloc (sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;

	for (i = 1 ; i < n ; i++) {
		t = new Node ;
		// t=(struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last->next = t ;
		last = t ;
	}
}
void create1(int B[] , int n) {
	struct Node*t, *last ; int i;
	second = new Node ; // first = (struct Node *) malloc (sizeof(struct Node));
	second->data = B[0];
	second->next = NULL;
	last = second;

	for (i = 1 ; i < n ; i++) {
		t = new Node ;
		// t=(struct Node*)malloc(sizeof(struct Node));
		t->data = B[i];
		t->next = NULL;
		last->next = t ;
		last = t ;
	}
}



void mergesortedlist(struct Node *p , struct Node*q) {
	struct Node  * last ;
	if (p->data < q->data) {
		third = last = p;
		p = p->next ;
		third->next = NULL;
	}
	else {
		third = last = q ;
		q = q->next ;
		third->next = NULL;
	}

	while (p && q) {
		if (p->data < q->data) {
			last->next = p;
			last = p ;
			p = p->next ;
			last->next = NULL;
		}
		else {
			last->next = q;
			last = q ;
			q = q->next ;
			last->next = NULL;
		}
	}
	if (p != NULL) last->next = p ;
	else last->next = q;
}


int main() {
	int A[] = {10, 20, 30, 40, 50};
	int B[] = {9 , 23 , 45, 49, 51};
	create(A, 5) ;
	create1(B, 5) ;
	Display(first); cout << endl ;
	Display(second);
	mergesortedlist(first , second) ; cout << endl;
	Display(third);

}