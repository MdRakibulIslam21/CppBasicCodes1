#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

class MaxHeapTree{
private:
    Node* root;
    int size;

    Node* findInsertionPoint(){
        if(size== 0) {
             return nullptr;
          }

        Node* queue[100];
        int front= 0,rear= 0;
        queue[rear++]= root;

        while(front < rear){
            Node* current = queue[front];
              front = front + 1;

         if(current->left== nullptr || current->right== nullptr){
            return current;
            }

            queue[rear++]= current->left;
            queue[rear++] = current->right;
        }
        return nullptr;
    }

    void heapifyUp(Node* node){
        while(node->parent!= nullptr && node->data > node->parent->data){
        int temp= node->data;
        node->data= node->parent->data;
        node->parent->data= temp;
        node= node->parent;
    }
}

    void inOrderTraversal(Node* node){
        if(node== nullptr) return;
        inOrderTraversal(node->left);
        cout<<node->data<<" ";
        inOrderTraversal(node->right);
    }

    void preOrderTraversal(Node* node){
        if(node== nullptr) return;
        cout<<node->data<<" ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout<<node->data<<" ";
    }

public:
    MaxHeapTree(){
    root = nullptr;
    size = 0;
    }

    void insert(int value){
        Node* newNode= new Node(value);
        size++;
        if(root== nullptr){
          root= newNode;
          return;
         }
        Node* insertionPoint= findInsertionPoint();

        if(insertionPoint->left== nullptr){
         insertionPoint->left= newNode;
        }
        else{
            insertionPoint->right= newNode;
        }
        newNode->parent= insertionPoint;
        heapifyUp(newNode);
    }

    void displayInOrder(){
        cout<<"In order Traversal:";
        inOrderTraversal(root);
        cout<<endl;
    }

    void displayPreOrder(){
        cout<<"Pre order Traversal:";
        preOrderTraversal(root);
        cout<<endl;
    }

    void displayPostOrder(){
        cout<<"Post order Traversal: ";
        postOrderTraversal(root);
        cout<<endl;
    }
};

int main(){
    MaxHeapTree t;
    t.insert(40);
    t.insert(62);
    t.insert(64);
    t.insert(34);
    t.insert(38);
    t.insert(33);
    t.insert(43);
    t.insert(86);
    t.insert(21);
    t.insert(50);
    t.insert(45);
    t.insert(87);
    t.insert(95);
    t.displayInOrder();
    t.displayPreOrder();
    t.displayPostOrder();
}
