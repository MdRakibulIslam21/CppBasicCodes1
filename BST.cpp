#include <iostream>
using namespace std;

struct BTreeNode {
    int data;
    BTreeNode* left;
    BTreeNode* right;

    BTreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void insert_node(BTreeNode*& temp, int value)
{
    if (temp == nullptr)
    {
        temp = new BTreeNode(value);
    } else if (value < temp->data)
    {
        insert_node(temp->left, value);
    } else if (value > temp->data)
    {
        insert_node(temp->right, value);
    }
}

void inorder_traversal(BTreeNode* root, int* arr, int& index)
{
    if (root == nullptr) return;
    inorder_traversal(root->left, arr, index);
    arr[index++] = root->data;
    inorder_traversal(root->right, arr, index);
}

int tree_size(BTreeNode* root)
{
    if (root == nullptr) return 0;
    return 1 + tree_size(root->left) + tree_size(root->right);
}

bool compare_trees_by_values(BTreeNode* root1, BTreeNode* root2)
{
    int size1 = tree_size(root1);
    int size2 = tree_size(root2);
    if (size1 != size2) return false;

    int* tree1_values = new int[size1];
    int* tree2_values = new int[size2];
    int index1 = 0, index2 = 0;

    inorder_traversal(root1, tree1_values, index1);
    inorder_traversal(root2, tree2_values, index2);

    for(int i = 0; i<size1; i++){
        if(tree1_values[i] != tree2_values[i]){
            delete[] tree1_values;
            delete[] tree2_values;
            return false;
        }
    }

    delete[] tree1_values;
    delete[] tree2_values;
    return true;
}

int main(){
    BTreeNode* root1 = nullptr;
    BTreeNode* root2 = nullptr;

    insert_node(root1, 50);
    insert_node(root1, 30);
    insert_node(root1, 70);
    insert_node(root1, 20);
    insert_node(root1, 40);
    insert_node(root1, 60);
    insert_node(root1, 80);

    insert_node(root2, 50);
    insert_node(root2, 30);
    insert_node(root2, 70);
    insert_node(root2, 20);
    insert_node(root2, 40);
    insert_node(root2, 60);
    insert_node(root2, 80);

    if(compare_trees_by_values(root1, root2)){
        cout<<"Both trees have the same values." << endl;
    } else {
        cout<<"The trees have different values." << endl;
    }

    return 0;
}
