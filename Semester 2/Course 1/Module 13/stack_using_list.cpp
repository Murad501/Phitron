#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> s;
    void push(int x)
    {
        s.push_back(x);
    };
    void pop()
    {
        s.pop_back();
    };
    int top()
    {
        return s.back();
    };
    bool empty()
    {
        if (s.size() == 0)
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
        return s.size();
    };
};

int main()
{
    myStack s;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.empty())
    {
        cout<<s.top()<<" "<<endl;
        s.pop();
    }
    
    return 0;
}