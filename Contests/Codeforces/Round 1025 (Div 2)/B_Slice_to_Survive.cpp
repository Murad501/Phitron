// 17/05/2025 20:47
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = 0, tans = 0;
    int tn = n, tm = m, ta = a, tb = b;

    while (n > 1)
    {

        ans++;
        int left = a;
        int right = (n - a) + 1;
        n = min(left, right);
        a = n / 2;
        if (n & 1)
        {
            a++;
        }
    }
    b = m / 2;
    if (m & 1)
    {
        b++;
    }
    // cout<<b<<" "<<nl;

    while (m > 1)
    {
        ans++;
        int left = b;
        int right = (m - b) + 1;
        m = min(left, right);
        b = m / 2;
        if (m & 1)
        {
            b++;
        }
    }

    while (tm > 1)
    {
        tans++;
        int left = tb;
        int right = (tm - tb) + 1;
        tm = min(left, right);
        tb = tm / 2;
        if (tm & 1)
        {
            tb++;
        }
    }
    ta = tn / 2;
    if (tn & 1)
    {
        ta++;
    }

    while (tn > 1)
    {

        tans++;
        int left = ta;
        int right = (tn - ta) + 1;
        tn = min(left, right);
        ta = tn / 2;
        if (tn & 1)
        {
            ta++;
        }
    }

    cout << min(tans, ans) << nl;
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