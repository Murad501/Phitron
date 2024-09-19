#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_any_position(Node *&head, int pos, int val)
{
    Node *temp = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void print_list_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_list_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int get_list_size(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;

        int currentSize = get_list_size(head);
        if (pos > currentSize)
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print_list_normal(head);
            print_list_reverse(tail);
        }
        else if (pos == currentSize)
        {
            insert_at_tail(tail, val);
            print_list_normal(head);
            print_list_reverse(tail);
        }
        else
        {
            insert_at_any_position(head, pos, val);
            print_list_normal(head);
            print_list_reverse(tail);
        }
    }


    return 0;
}