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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        sz++;
    };
    void pop()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == NULL)
        {
            tail = NULL;
        }
        sz--;
    };
    int front()
    {
        return head->value;
    };
    int size()
    {
        return sz;
    };

    bool isEmpty()
    {
        return sz == 0;
    };
};

int main()
{
    myQueue qe;
    int t;
    cin >> t;
    while (t--)
    {
        int val;
        cin >> val;
        qe.push(val);
    };

    cout<<qe.front()<<endl;

    while (!qe.isEmpty())
    {
        cout << qe.front() << " ";
        qe.pop();
    }

    return 0;
}