#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

// Function to create a linked list with n nodes
Node* createLinkedList(int n) {
    if (n <= 0) return nullptr;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; ++i) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;

        Node* newNode = new Node;
        newNode->data = value;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to display the linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to reverse and display the linked list
void printReverse(Node* head) {
    if (head == nullptr) return;

    printReverse(head->next); // Recursive call to the next node
    cout << head->data << " "; // Print the current node's data after recursion
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Create the linked list
    Node* head = createLinkedList(n);

    // Display the original linked list
    cout << "Original Linked list: ";
    printLinkedList(head);

    // Display the reversed linked list
    cout << "Reverse Linked list: ";
    printReverse(head);
    cout << endl;

    return 0;
}

