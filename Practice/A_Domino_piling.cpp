// 11/07/2025 19:40
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

    if (n > 1)
    {
        int ans = (n / 2) * m;
        if (n & 1)
        {
            ans += (m / 2);
        }
        cout << ans << nl;
    }
    else if (m > 1)
    {
        int ans = (m / 2);
        cout << ans << nl;
    }
    else
    {
        zero;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}