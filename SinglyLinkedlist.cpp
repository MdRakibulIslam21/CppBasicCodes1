#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next = nullptr;
};

void printLinkedList(Node* h){
	while(h != nullptr){
		cout<<h->data<<endl;
		h = h->next;
	}
}

void insertAtLast(Node* h, int data){
	if(h == nullptr){
		h = new Node;
		h->data = data;
	}
	else{
		while(h->next != nullptr){
			h = h->next;
		}
		h->next = new Node;
		h->next->data = data;
	}
}

int main(){
	Node* head = nullptr;

	head = new Node;

	head->data = 10;
	//cout<<head->data<<endl;
	//cout<<head->next<<endl;

	head->next = new Node;
	head->next->data = 20;


	//cout<<head->data<<endl;
	//cout<<head->next<<endl;

	//cout<<head->next->data<<endl;
	//cout<<head->next->next<<endl;

	printLinkedList(head);
	insertAtLast(head,30);
	insertAtLast(head,40);
	insertAtLast(head,50);
	insertAtLast(head,60);
	insertAtLast(head,70);
	printLinkedList(head);

return 0;
}






