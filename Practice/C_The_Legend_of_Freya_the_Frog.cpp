// 05/08/2025 21:58
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
    int x, y, k;
    cin >> x >> y >> k;

    bool isA = true;
    if (x < y)
    {
        isA = false;
    }

    int ans = 0;
    int mn = min(x, y);
    ans += mn / k;
    if (mn % k)
    {
        ans++;
    }
    int mx = max(x, y);
    mx -= ans * k;
    ans += ans;

    if (mx > 0)
    {
        ans += mx / k;
        ans += mx / k;

        if (mx % k)
        {
            ans += 2;
        }
        if (isA)
        {
            ans--;
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