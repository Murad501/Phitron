// 08/08/2025 11:23
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }

    bool ok = false;
    if (a[0][0] == a[0][m - 1])
    {
        for (int i = 0; i < m; i++)
        {
            if (a[n - 1][i] == a[0][0])
            {

                ok = true;
                break;
            }
        }
    }

    if (a[n - 1][0] == a[n - 1][m - 1])
    {
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] == a[n - 1][0])
            {
                ok = true;
                break;
            }
        }
    }

    if (a[0][0] == a[n - 1][0])
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i][m - 1] == a[0][0])
            {
                ok = true;
                break;
            }
        }
    }

    if (a[0][m - 1] == a[n - 1][m - 1])
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == a[n - 1][m - 1])
            {
                ok = true;
                break;
            }
        }
    }
    if ((a[0][0] == a[n - 1][m - 1]) || (a[0][m - 1] == a[n - 1][0]))
    {
        
        ok = true;
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}