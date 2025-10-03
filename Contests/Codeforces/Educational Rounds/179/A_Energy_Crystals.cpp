// 03/06/2025 20:35
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
    int x;
    cin >> x;
    vector<int> v(3, 0);
    int ans = 0;
    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            int mn, mx;
            if (i == 0)
            {
                mn = min(v[1], v[2]);
                mx = max(v[1], v[2]);
            }
            else if (i == 1)
            {
                mn = min(v[0], v[2]);
                mx = max(v[0], v[2]);
            }
            else
            {
                mn = min(v[1], v[0]);
                mx = max(v[1], v[0]);
            }
            int val = min(x, ((mn * 2) + 1));
            if (val != v[i])
            {
                ans++;
            }
            v[i] = val;
        }

        bool ok = true;
        for (int i = 0; i < 3; i++)
        {
            if (v[i] != x)
            {
                ok = false;
            }
        }
        if (ok)
        {
            break;
        }
    }
    cout << ans << nl;
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