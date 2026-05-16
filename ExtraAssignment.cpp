#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

class MaxHeap {
private:
    Node* root;
    int size;

    Node* findInsertionPoint() {
        Node* current = root;
        int levels = 0;
        int nodes = size + 1;

        while (nodes > 1) {
            nodes /= 2;
            levels++;
        }

        nodes = size + 1;
        for (int i = levels - 2; i >= 0; i--) {
            if ((nodes >> i) & 1) {
                if (current->right == nullptr) {
                    return current;
                }
                current = current->right;
            } else {
                if (current->left == nullptr) {
                    return current;
                }
                current = current->left;
            }
        }
        return current;
    }

    void heapifyUp(Node* node) {
        while (node->parent && node->data > node->parent->data) {
            swap(node->data, node->parent->data);
            node = node->parent;
        }
    }

    void inOrderTraversal(Node* node) {
        if (node == nullptr) return;
        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void preOrderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }

public:
    MaxHeap() {
        root = nullptr;
        size = 0;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!root) {
            root = newNode;
        } else {
            Node* parent = findInsertionPoint();
            if (!parent->left) {
                parent->left = newNode;
            } else {
                parent->right = newNode;
            }
            newNode->parent = parent;
            heapifyUp(newNode);
        }
        size++;
    }

    void printInOrder() {
        inOrderTraversal(root);
        cout << endl;
    }

    void printPreOrder() {
        preOrderTraversal(root);
        cout << endl;
    }

    void printPostOrder() {
        postOrderTraversal(root);
        cout << endl;
    }
};

int main() {
    MaxHeap heap;
     //int choice, value;
    heap.insert(40);
    heap.insert(62);
    heap.insert(64);
    heap.insert(34);
    heap.insert(38);
    heap.insert(33);
    heap.insert(43);
    heap.insert(86);
    heap.insert(21);
    heap.insert(50);
    heap.insert(45);
    heap.insert(87);
    heap.insert(95);



    cout << "In Order Traversal: ";
    heap.printInOrder();

    cout << "Pre Order Traversal: ";
    heap.printPreOrder();

    cout << "Post Order Traversal: ";
    heap.printPostOrder();

    return 0;
}

