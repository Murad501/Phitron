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
    return (1LL * (a * b)) / __gcd(a, b);
}

void solve()
{
    ll x;
    cin >> x;
    ll a = 1, b = x;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll val = x / i;
            if (val == i || lcm(val, i) != x)
            {
                continue;
            }
            if (max(val, i) < max(a, b))
            {
                a = val;
                b = i;
            }
        }
    }
    cout << a << " " << b << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}