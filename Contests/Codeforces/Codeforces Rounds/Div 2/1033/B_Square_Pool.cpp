// 21/06/2025 21:13
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
    int n, s;
    cin >> n >> s;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int dx, dy, xi, xy;
        cin >> dx >> dy >> xi >> xy;

        if (dx == 1 && dy == -1 || dx == -1 && dy == 1)
        {
            if (xi + xy == s)
            {
                ans++;
            }
        }
        else
        {
            if (xi == xy)
            {
                ans++;
            }
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