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

int main()
{

    Node *root = input_tree();
    int lvl;
    cin >> lvl;

    vector<int> v;

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == lvl)
        {
            v.push_back(node->value);
        }

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }

    int len = v.size();

    if (len)
    {
        for (int i = 0; i < len; ++i)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}