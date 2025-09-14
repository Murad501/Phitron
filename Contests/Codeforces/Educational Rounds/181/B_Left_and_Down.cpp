// 22/07/2025 20:43
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
    int a, b, k;
    cin >> a >> b >> k;
    int gcd = __gcd(a, b);
    // cout << gcd << " gcd" << nl;

    bool ok = false;
    if (a <= k && b <= k)
    {
        ok = true;
    }
    else
    {
        if (a % gcd == 0 && b % gcd == 0 && (a / gcd) <= k && (b / gcd) <= k)
        {
            ok = true;
        }
    }

    if (ok)
    {
        cout << 1 << nl;
    }
    else
    {
        cout << 2 << nl;
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