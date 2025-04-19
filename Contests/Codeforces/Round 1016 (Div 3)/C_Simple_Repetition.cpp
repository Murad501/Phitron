// 08/04/2025 20:50
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

bool isPrime(ll n)
{
    if (n < 4)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    bool ok = true;
    for (ll i = 2; (i * i) <= n; i++)
    {

        if (n % i == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    ll x, k;
    cin >> x >> k;
    if (x == 1 && k == 1)
    {
        no;
    }
    else if ((x == 1 && k == 2) || k == 1 && isPrime(x))
    {
        yes;
    }
    else
    {

        no;
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