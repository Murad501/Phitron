// 12/08/2025 17:39
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
    int a, b, c;
    cin >> a >> b >> c;

    int x = b;
    int diff;
    if (b <= c)
    {
        diff = c - b;
        x -= diff;
    }
    else
    {
        diff = b - c;
        x += diff;
    }

    if (x >= a && x % a == 0)
    {
        yes;
        return;
    }

    x = (a + c) / 2;

    if (abs(a - x) == abs(c - x))
    {
        if (x >= b && x % b == 0)
        {
            yes;
            return;
        }
    }

    x = b;
    if (a >= b)
    {
        diff = a - b;
        x -= diff;
    }
    else
    {
        diff = b - a;
        x += diff;
    }
    if (x >= c && x % c == 0)
    {
        yes;
        return;
    }
    no;
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