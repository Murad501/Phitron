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

int main()
{
    Node *l1head = NULL;
    Node *l1tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(l1head, l1tail, val);
    }

    Node *l2head = NULL;
    Node *l2tail = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(l2head, l2tail, val);
    }

    int list_one_size = get_linked_list_size(l1head);
    int list_two_size = get_linked_list_size(l2head);

    if (list_one_size == list_two_size)
    {
        Node *temp1 = l1head;
        Node *temp2 = l2head;
        bool same = true;
        for (int i = 0; i < list_one_size; i++)
        {
            if (temp1->value != temp2->value)
            {
                cout << "NO";
                same = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if (same)
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}