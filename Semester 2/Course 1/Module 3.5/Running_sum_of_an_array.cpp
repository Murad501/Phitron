#include <bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> v)
{

    vector<int> pre;
    pre.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        pre.push_back(pre[i - 1] + v[i]);
    }

    return pre;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> result(prefixSum(v));

    for (int nm : result)
    {
        cout << nm << " ";
    }

    return 0;
}