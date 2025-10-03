// 24/09/2025 17:36
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
    vector<int> v;
    bool ok = true;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            v.push_back(x);
        }
        else
        {
            //  v.push_back(x);
            if (x <= v[i - 1])
            {
                ok = false;
            }
            v.push_back(x);
        }
    }

    if (!ok)
    {
        cout << 1 << nl;
    }
    else
    {
        int mx = v[m - 1];
        cout << (n - mx) + 1 << nl;
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