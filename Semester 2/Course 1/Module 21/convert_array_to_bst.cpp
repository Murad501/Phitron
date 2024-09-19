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


Node * convert(int ar[], int l, int r ){
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node *root = new Node(ar[mid]);
    Node *left = convert(ar, l, mid-1);
    Node *right = convert(ar, mid+1, r);

    root->left = left;
    root->right = right;

    return root;
}

int main()
{

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++){
        cin >> ar[i]; 
    }

    Node* root = convert(ar, 0, n-1);
    
    return 0;
}