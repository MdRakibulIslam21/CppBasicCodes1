#include<iostream>
using namespace std;
struct node{
int data;
node* next = nullptr;
};

void printLinkedList(node* h){
    while(h!=nullptr){
        cout<<h->data<<endl;
        h=h->next;
    }

}
void insertAtLast(node* h,int d){
    if(h==nullptr){
        h = new node;
        h->data = d;
    }
    else{
        while(h->next!=nullptr){//last node khujbe
            h = h->next;
        }
        h->next = new node;
        h->next->data = data;
    }

}
void intsertAtFirst(node* h,int d)
{
    if(h==nullptr){
        h = new node;
        h->data = d;
    }
}
int main(){
    node* head = nullptr;
    head = new node;

    head->data = 21;
    cout<<head->data<<endl;

    head->next= new node;
    head->next->data = 20;
    cout<<head->next->data <<endl;

    head->next->next=new node;
    head->next->next->data = 19;
    cout<<head->next->next->data<<endl<<endl<<endl;
    printLinkedList(head);

    return 0;


}
