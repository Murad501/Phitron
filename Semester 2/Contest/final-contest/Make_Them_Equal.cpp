#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<char> a;
        vector<char> b;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            b.push_back(x);
        }

        int notMatchCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                notMatchCount++;
            }
        }

        if (notMatchCount <= k)
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