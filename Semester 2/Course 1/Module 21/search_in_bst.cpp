#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;

        else
            left = new Node(l);

        if (r == -1)
            right = NULL;

        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

bool search_val(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->value == x)
        return true;

    if (x < root->value)
    {
        return search_val(root->left, x);
    }
    else
    {
        return search_val(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();
    bool found = search_val(root, 100);

    if(found){
        cout << "Value found in the tree" << endl;
    }else{
        cout << "Value not found in the tree" << endl;
    }

    return 0;
}