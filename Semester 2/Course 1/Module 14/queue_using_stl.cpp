#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> qe;

    void push(int val)
    {
        qe.push_back(val);
    };
    void pop()
    {
        qe.pop_front();
    };
    int front()
    {
        return qe.front();
    };
    int size()
    {
        return qe.size();
    };
    bool isEmpty()
    {
        return qe.empty();
    };
};

int main()
{
    myQueue qe;

    int t;
    cin >> t;
    while (t--)
    {
        int val;
        cin >> val;
        qe.push(val);
    };

    cout << qe.front() << endl;

    while (!qe.isEmpty())
    {
        cout << qe.front() << endl;
        qe.pop();
    }
    return 0;
}