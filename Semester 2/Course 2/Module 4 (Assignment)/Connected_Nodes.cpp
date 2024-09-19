#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v[1000];
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;

        sort(v[a].begin(), v[a].end(), greater<int>());
        if (v[a].size())
        {
            for (int child : v[a])
            {
                cout << child << " ";
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}