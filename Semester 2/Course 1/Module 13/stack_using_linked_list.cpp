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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int x)
    {
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        sz++;
    };
    void pop()
    {
        if (head == NULL)
        {

            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        if (tail == NULL)
        {
            head = NULL;
        }
        sz--;
    };
    int top()
    {

        return tail->value;
    };
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    int size()
    {

        return sz;
    };
};

int main()
{
    myStack s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.empty())
    {
        cout << s.top() << " " << endl;
        s.pop();
    }

    return 0;
}