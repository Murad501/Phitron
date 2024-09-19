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
            newNode->prev = tail;
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
        else
        {

            head->prev = NULL;
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
    bool empty()
    {
        return sz == 0;
    };
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
        if (tail->prev == NULL)
        {
            delete tail;
            tail = NULL;
            head = NULL;
            return;
        }
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
    int n, m;
    cin >> n >> m;
    myStack s;
    myQueue q;
    bool same = true;
    if (n != m)
    {
        same = false;
    }
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n == m && same)
    {

        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                same = false;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }
    }

    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}