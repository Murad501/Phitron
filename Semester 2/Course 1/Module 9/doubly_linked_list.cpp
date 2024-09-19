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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *temp = head;
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

void insert_at_any_position(Node *head, int pos, int value)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = deleteNode->next;
    head->prev = NULL;
    delete deleteNode;
}
void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = deleteNode->prev;
    tail->next = NULL;
    delete deleteNode;
}

void delete_at_any_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    deleteNode->next->prev = temp;
    delete deleteNode;
}

int get_list_size(Node *head)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_at_tail(head, tail, value);
    }

    int pos, val;
    cin >> pos >> val;

    int list_size = get_list_size(head);

    if (pos > list_size)
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, val);
    }
    else if (pos == list_size)
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_at_any_position(head, pos, val);
    }

    print_list_normal(head);
    print_list_reverse(tail);

    int deletePos;
    cin >> deletePos;

    int current_list_size = get_list_size(head);

    if (deletePos > current_list_size)
    {
        cout << "Invalid" << endl;
    }
    else if (deletePos == 0)
    {
        delete_head(head);
    }
    else if (deletePos == current_list_size)
    {
        delete_tail(tail);
    }
    else
    {
        delete_at_any_position(head, pos);
    }

    print_list_normal(head);
    print_list_reverse(tail);

    return 0;
}