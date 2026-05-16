#include<iostream>
//#include<stdlib.h>
using namespace std;
class Node{
public:
    int value;
    Node*next;

};
int main(){
    Node* head;
    Node* one=NULL;
    Node* two=NULL;
    Node* three=NULL;

    one->value=1;
    two->value=2;
    three->value=3;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head = one;
    while(head!=NULL){
        cout<<head->value;
        head=head->next;
    }

}
