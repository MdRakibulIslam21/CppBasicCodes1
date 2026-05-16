#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);

    if (idx == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        if (tmp == NULL)
        {
            cout << "Invalid Index!\n";
            return;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL)
    {
        cout << "Invalid Index!\n";
        return;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void printing_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int idx, value;
    cin >> idx >> value;
    insert_at_any_position(head, idx, value);
    printing_linked_list(head);
}
