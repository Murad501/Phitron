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
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        bool found = false;
        if (a == b)
        {
            found = true;
        }
        else
        {
            for (int child : v[a])
            {
                if (child == b)
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}