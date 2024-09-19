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
vector<int> v;
void leaf_nodes(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->value);
        return;
    }
    else
    {

        leaf_nodes(root->left);
        leaf_nodes(root->right);
        return;
    }
}

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
    leaf_nodes(root);
    

    sort(v.begin(), v.end(), greater<int>());
    int len = v.size();

    for (int i = 0; i < len; i++){
        cout << v[i] << " ";
    }
        

    return 0;
}