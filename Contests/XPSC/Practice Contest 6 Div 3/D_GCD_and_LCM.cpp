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

ll lcm(ll a, ll b)
{
    return (1LL * (a / __gcd(a, b)) * b);
}

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    if (x == 1 || y == 1)
    {
        cout << 2 << nl;
    }
    else if (x % y == 0 || y % x == 0)
    {
        cout << min(x, y) * 2 << nl;
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            if (x == y)
            {
                break;
            }

            ll a = __gcd(x, y);
            if (x > y)
            {
                x = a;
            }
            else
            {
                y = a;
            }

            ll b = lcm(x, y);
            if (x > y)
            {
                x = b;
            }
            else
            {
                y = b;
            }
        }
        cout << x + y << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}