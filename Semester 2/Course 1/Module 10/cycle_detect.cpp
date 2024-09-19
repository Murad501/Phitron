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

int main()
{

    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;

    Node *slow = head;
    Node *fast = head;

    bool found = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            cout << "Cycle detected" << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "No cycle detected" << endl;
    }

    return 0;
}