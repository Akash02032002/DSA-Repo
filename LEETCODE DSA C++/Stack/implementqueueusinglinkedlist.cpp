#include<iostream>
using namespace std ;
struct Node {
	struct Node * next ; int data;
}*front = NULL, *rear = NULL ;


void enqueue(int x) {
	struct Node *t = new Node ;
	if (t == NULL) {cout << "full queue" ;}
	else {
		t->data = x ; t->next = NULL ;
		if (front == NULL) front = rear = t;
		else {
			rear->next = t;
			rear = t ;
		}
	}
}
int dequeue( ) {
	Node * p ; int x = -1;
	if (front == NULL) return x;
	else {
		p = front ;
		front = front->next ;
		x = p->data;
		delete(p);
	}  return x;
}
void display() {
	Node *p = front;
	while (p != NULL) {cout << p->data << " "; p = p->next ;}
}
int top() {
	return front -> data;
}
int size() {
	Node *p = front; int c = 0 ;
	while (p != NULL) {c++ ; p = p->next ;} return  c ;
}
bool empty() {
	if (front == NULL) return true ; return false ;
}
int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display(); cout << endl; cout << "size=" << size() << endl ;
	cout << top() << endl;
	cout << dequeue() << endl;
	display(); cout << endl ; cout << "size=" << size() << endl ;
	cout << top() << " " ;
}