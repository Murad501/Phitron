#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void take_list_input(Node *&head, Node *&tail, string val)
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
}

bool isExist(Node *head, string s)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == s)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        take_list_input(head, tail, s);
    }

    int q;
    cin >> q;

    cin.ignore();

    Node *temp = head;

    while (q--)
    {
        string s;
        getline(cin, s);
        if (s == "prev")
        {
            if (temp->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << temp->prev->value << endl;
                temp = temp->prev;
            }
        }
        else if (s == "next")
        {
            if (temp->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << temp->next->value << endl;
                temp = temp->next;
            }
        }
        else
        {
            stringstream ss(s);

            string word;
            while (ss >> word)
            {
                if (word != "visit")
                {

                    Node *findTemp = head;

                    bool found = false;

                    while (findTemp != NULL)
                    {
                        if (findTemp->value == word)
                        {
                            found = true;
                            break;
                        }
                        findTemp = findTemp->next;
                    }
                    if (found)
                    {
                        temp = findTemp;
                        cout << temp->value << endl;
                    }
                    else
                    {
                        cout << "Not Available" << endl;
                    }
                }
            }
        }
    }

    return 0;
}