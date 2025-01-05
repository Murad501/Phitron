#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (v != x)
        {
            ar.push_back(v);
        }
    }

    for (auto v : ar)
    {
        cout << v << " ";
    }
    cout << '\n';
    return 0;
}