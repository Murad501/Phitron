#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void take_input(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void delete_val(Node *&head)
{

    Node *temp = head;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        Node *previousNode = i;
        for (Node *j = i->next; j != NULL;)
        {
            if (j->value == i->value)
            {
                Node *deleteNode = j;
                previousNode->next = deleteNode->next;
                delete deleteNode;
                j = previousNode->next;
            }
            else
            {
                previousNode = j;
                j = j->next;
            }
        }
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
        take_input(head, tail, val);
    }

    delete_val(head);

    print_linked_list(head);

    return 0;
}