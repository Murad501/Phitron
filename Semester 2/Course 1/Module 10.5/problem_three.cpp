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

bool isListPalindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    bool flag = true;

    while (i != j && i->next != j)
    {
        if (i->value != j->value)
        {
            flag = false;
            break;
        }

        i = i->next;
        j = j->prev;
    }
    if (flag && i->value != j->value)
    {
        flag = false;
    }

    return flag;
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

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        take_list_input(head, tail, val);
    }

    bool isPalindrome = isListPalindrome(head, tail);
    if (isPalindrome)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}