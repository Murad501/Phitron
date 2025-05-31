// 21/05/2025 20:31
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
    int n, m, k;
    cin >> n >> m >> k;

    int ans = 0;
    if(k == 0)
    {
        cout << n * m << nl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        int curr = i * m;
        if (curr >= k)
        {
            ans = curr;
            break;
        }
    }
    // cout<<ans<<nl;
    for (int i = 1; i <= m; i++)
    {
        int curr = i * n;
        if (curr >= k)
        {
            ans = min(ans, curr);
            break;
        }
    }
    cout << (n * m) - ans << nl;
    // cout<<nl;
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