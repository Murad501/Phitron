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

bool isPrime(ll x)
{
    bool flag = true;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
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
    ll n;
    cin >> n;
    bool ok = isPrime(n);

    int ans = 2;
    if (ok)
    {
        ans = 1;
    }
    if (!ok)
    {
        if (n % 2 == 0)
        {
            ans = 2;
        }
        else if (!isPrime(n - 2))
        {

            ans = 3;
        }
    }

    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}