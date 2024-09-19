#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> qe;
    int t;
    cin >> t;
    while (t--) {
        int val;
        cin >> val;
        qe.push(val);
    }

    while (!qe.empty())
    {
        cout<<qe.front()<<endl;
        qe.pop();
    }
    
    return 0;
}