// 05/08/2025 10:20
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
    int n, a, b;
    cin >> n >> a >> b;

    int ans = n;
    int rem = 3 - (a % 3);

    if (a % 3 && b < rem)
    {
        minus;
        return;
    }
    if (a % 3)
    {
        a += rem;
        b -= rem;
    }

    ans += a / 3;
    ans += b / 3;
    if (b % 3)
    {
        ans++;
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