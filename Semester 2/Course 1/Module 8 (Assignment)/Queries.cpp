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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node *&tail, int val)
{

    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}

void delete_node(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = temp->next;
        delete deleteNode;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        if (temp->next == NULL)
        {
            tail = temp;
        }
        delete deleteNode;
    }
}

int get_linked_list_size(Node *head)
{
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {

            if (head == NULL)
            {
                insert_at_head(head, tail, v);
            }
            else
            {

                insert_at_tail(tail, v);
            }
            print_linked_list(head);
        }
        else
        {

            int list_size = get_linked_list_size(head);
            if (list_size <= v)
            {
                print_linked_list(head);
            }
            else
            {
                delete_node(head, tail, v);
                print_linked_list(head);
            }
        }
    }

    return 0;
}