// 25/07/2025 07:51
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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            b.push_back(x);
        }
        else
        {
            if (x != b[b.size() - 1])
            {
                b.push_back(x);
            }
        }
    }
    m = b.size();

   set<int>st;
    bool ok = true;

    int i = 0;
    for (int j = 0; j < m; j++)
    {
        if (a[i] == b[j])
        {
            j++;
        }
        else
        {
            i++;
            if (i == n)
            {
                ok = false;
                break;
            }
            if (a[i] != b[j])
            {
                ok = false;
                break;
            }
        }
    }

    if (ok)
    {
        cout << "YA" << nl;
    }
    else
    {
        cout << "TIDAK" << nl;
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