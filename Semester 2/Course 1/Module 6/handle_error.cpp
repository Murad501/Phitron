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

void insert_at_tail(Node *&head, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
};

void print_linked_list(Node *head)
{
    cout << "Printing Linked List" << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    cout << "inserted at position" << pos << endl;
};

void delete_at_position(Node *head, int pos)
{
    cout << "deleting at position" << pos << endl;
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }
    }

    if (temp->next == NULL)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Node Delete at position" << pos << endl;
}

void delete_head(Node *&head)
{
    if(head == NULL){
        cout << "Empty Linked List" << endl;
        return;
    }
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << "Head Deleted" << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;    // done
        cout << "Option 2: Print Linked List" << endl; // done
        cout << "Option 3: Insert at any position" << endl; //done
        cout << "Option 4: Delete a Position" << endl; //done

        cout << "Option 5: Delete Head" << endl; //done
        cout << "Option 6: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter the value to be inserted" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter the position" << endl;
            cin >> pos;
            cout << "Enter the value" << endl;
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else if (op == 4)
        {
            int pos;
            cout << "Enter the position" << endl;
            cin >> pos;
            delete_at_position(head, pos);
        }
        else if (op == 5)
        {
            delete_head(head);
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}