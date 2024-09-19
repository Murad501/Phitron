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


void print_max_min_difference(Node *head)
{
    Node *temp = head;

    int minVal = temp->value;
    int maxVal = temp->value;

    while (temp != NULL)
    {
        if (minVal > temp->value)
        {
            minVal = temp->value;
        }
        if (maxVal < temp->value)
        {
            maxVal = temp->value;
        }

        temp = temp->next;
    }

    int diff = maxVal - minVal;
    cout << diff;
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

    print_max_min_difference(head);

    return 0;
}