#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (ll i = 0; i <= m; i++)
    {
        if (i == 0)
        {
            ans = 1;
            continue;
        }
        ll x = 1;
        for (int j = 0; j < i; j++)
        {
            x *= n;
        }
        ans += x;
        if (ans > 1e9)
        {
            break;
        }
    }
    if (ans <= 1e9)
    {
        cout << ans << nl;
    }
    else
    {
        cout << "inf" << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}