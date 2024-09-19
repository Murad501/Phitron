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

void take_input(Node *&head)
{
    Node *temp = head;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = temp->next;
        }
    }
}

void printing_linked_list_length(Node *head)
{

    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    cout << "Count: " << length << endl;
}

void printing_linked_list(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// void check_duplicate_value(Node *head)
// {

//     Node *temp1 = head;
//     Node *temp2 = head;

//     bool duplicate = false;
//     while (temp1 != NULL)
//     {

//         while (temp2 != NULL)
//         {
//             cout << temp1->value << " " << temp2->value << endl;
//             if (temp1->next != temp2->next && temp1->value == temp2->value)
//             {
//                 duplicate = true;
//                 break;
//                 cout<<"In Break";
//             }
//             temp2 = temp2->next;
//         }
//         if (duplicate)
//         {
//             break;
//             cout<<"In Break";
//         }
//         temp1 = temp1->next;
//     }

//     if (duplicate)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

void check_sorted_or_not(Node *head)
{
    Node *temp = head;
    bool sorted = true;
    while (temp->next != NULL)
    {
        if (temp->value > temp->next->value)
        {
            sorted = false;
            break;
        }
        temp = temp->next;
    }

    if (sorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

void print_middle_value(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    bool isLengthEven = length % 2 == 0;
    int mid = length / 2;

    temp = head;

    for (int i = 0; i <= mid; i++)
    {
        if (isLengthEven && (i == mid - 1 || i == mid))
        {
            cout << temp->value << endl;
        }
        else if (i == mid)
        {
            cout << temp->value << endl;
        }
        temp = temp->next;
    }
}

void insert_any_position(Node *&head, int pos, int val)
{

    Node *temp = head;


    for (int j = 1; j < pos - 1; j++)
    {

        if (temp == NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }

        temp = temp->next;
    }


    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = temp;
        head = newNode;
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    temp = head;
    
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    take_input(head);

    // printing_linked_list_length(head);
    // check_duplicate_value(head);

    // printing_linked_list(head);
    // print_middle_value(head);  -> Problem-3
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, val;
        cin >> p >> val;
        insert_any_position(head, p, val);
    }

    // check_sorted_or_not(head); -> Problem-5

    return 0;
}