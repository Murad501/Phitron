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

void take_list_input(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
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

    Node *headOne = NULL;
    Node *tailOne = NULL;

    Node *headTwo = NULL;
    Node *tailTwo = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        take_list_input(headOne, tailOne, val);
    }

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        take_list_input(headTwo, tailTwo, val);
    }

    int sizeOne = get_list_size(headOne);
    int sizeTwo = get_list_size(headTwo);

    bool isSame = true;

    Node *tempOne = headOne;
    Node *tempTwo = headTwo;

    if (sizeOne != sizeTwo)
    {
        isSame = false;
    }
    else
    {
        for (int i = 0; i < sizeOne; i++)
        {
            if (tempOne->value != tempTwo->value)
            {
                isSame = false;
                break;
            }
            tempOne = tempOne->next;
            tempTwo = tempTwo->next;
        }
    }

    if (isSame)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // print_list_normal(headOne);
    // print_list_reverse(tailOne);
    // print_list_normal(headTwo);
    // print_list_reverse(tailTwo);

    return 0;
}