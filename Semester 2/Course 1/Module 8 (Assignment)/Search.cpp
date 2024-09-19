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


void search_linked_list(Node *head, int x)
{
    Node *temp = head;
    bool found = false;
    int pos = 1;
    while (temp != NULL)
    {
        if (temp->value == x)
        {
            found = true;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if (found)
    {
        cout << pos - 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;

        search_linked_list(head, x);
    }

    return 0;
}