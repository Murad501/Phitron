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
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    ll gcd_one = 0, gcd_two = 0;
    for (int i = 0; i < n; i += 2)
    {
        gcd_one = __gcd(gcd_one, v[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        gcd_two = __gcd(gcd_two, v[i]);
    }

    ll ans = 0;
    bool ok = true;
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % gcd_one == 0)
        {
            ok = false;
        }
    }
    if (ok)
    {
        ans = gcd_one;
    }
    else
    {
        bool ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % gcd_two == 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans = gcd_two;
        }
    }
    cout << ans << nl;
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