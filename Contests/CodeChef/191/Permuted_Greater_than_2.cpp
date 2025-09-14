// 18/06/2025 20:41
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
    int x, y, z;
    cin >> x >> y >> z;

    bool ok = true;
    if (!y)
    {
        if (!z && x)
        {
            ok = false;
        }
        else if (x > (z + 1))
        {
            ok = false;
        }
    }
    else if (!z && !x && y)
    {
        if (y == 1)
        {
            ok = false;
        }
    }
    else if (x && !z)
    {
        ok = false;
    }
    else if (x && y && z)
    {
        if (x > z)
        {
            ok = false;
        }
    }
    if (ok)
    {
        cyes;
    }
    else
    {
        cno;
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