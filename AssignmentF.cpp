#include <iostream>
#include <queue>
using namespace std;

class MaxHeapTree {
private:
    class TreeNode {
    public:
        int key;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : key(value), left(nullptr), right(nullptr) {}
    };

    TreeNode* root;

    void maxHeapify(TreeNode* root) {
        if (!root) return;
        TreeNode* largest = root;
        if (root->left && root->left->key > largest->key) {
            largest = root->left;
        }
        if (root->right && root->right->key > largest->key) {
            largest = root->right;
        }
        if (largest != root) {
            swap(root->key, largest->key);
            maxHeapify(largest);
        }
    }

    TreeNode* buildMaxHeap(TreeNode* root) {
        if (!root) return nullptr;
        if (root->left) buildMaxHeap(root->left);
        if (root->right) buildMaxHeap(root->right);
        maxHeapify(root);
        return root;
    }

    void preOrderTraversal(TreeNode* root) {
        if (!root) return;
        cout << root->key << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }

    void inOrderTraversal(TreeNode* root) {
        if (!root) return;
        inOrderTraversal(root->left);
        cout << root->key << " ";
        inOrderTraversal(root->right);
    }

    void postOrderTraversal(TreeNode* root) {
        if (!root) return;
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->key << " ";
    }

public:
    MaxHeapTree() : root(nullptr) {}

    void insert(int key) {
        if (!root) {
            root = new TreeNode(key);
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();
            if (!current->left) {
                current->left = new TreeNode(key);
                break;
            } else {
                q.push(current->left);
            }
            if (!current->right) {
                current->right = new TreeNode(key);
                break;
            } else {
                q.push(current->right);
            }
        }
        buildMaxHeap(root);
    }





    void displayPreOrder() {
        cout << "Pre Order Traversal: ";
        preOrderTraversal(root);
        cout << endl;
    }

    void displayInOrder() {
        cout << "In Order Traversal: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void displayPostOrder() {
        cout << "Post Order Traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }
};

int main() {
    MaxHeapTree heap;
    heap.insert(10);
    heap.insert(20);
    heap.insert(15);
    heap.insert(30);
    heap.insert(40);

    heap.displayPreOrder();
    heap.displayInOrder();
    heap.displayPostOrder();



    return 0;
}
