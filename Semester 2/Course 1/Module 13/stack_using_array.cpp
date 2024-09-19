#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    };
    void pop()
    {
        v.pop_back();
    };
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    myStack s;
    // s.push(10);
    // s.push(20);
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // s.pop();
    // if (s.isEmpty())
    // {
    //     cout << "Stack is empty" << endl;
    // }
    // else
    // {
    //     cout << s.top() << endl;
    // }

    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.isEmpty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    

    // cout<<s.top() << endl;

    return 0;
}