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

void print_list_normal(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
};

void print_list_reverse(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int get_list_size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *&head, int pos, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int list_size = get_list_size(head);

        if (x > list_size)
        {

            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {

            insert_at_head(head, tail, v);
            print_list_normal(head);
            print_list_reverse(tail);
        }
        else if (list_size == x)
        {

            insert_at_tail(tail, v);
            print_list_normal(head);
            print_list_reverse(tail);
        }
        else
        {

            insert_at_position(head, x, v);
            print_list_normal(head);
            print_list_reverse(tail);
        }
    }
    return 0;
}