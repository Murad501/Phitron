#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        dq.push_back(num);
    }

    dq.pop_front();

    for(auto val: dq){
        cout << val << " ";
    }
    
    return 0;
}