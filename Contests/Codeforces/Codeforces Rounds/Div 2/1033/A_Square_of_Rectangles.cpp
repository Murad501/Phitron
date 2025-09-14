// 21/06/2025 20:35
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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    bool ok = false;
    if (l1 == l2 && l2 == l3 && (b1 + b2 + b3) == l1)
    {
        ok = true;
    }
    else if (b1 == b2 && b1 == b3 && (l1 + l2 + l3) == b1)
    {
        ok = true;
    }
    else if (l1 == (l2 + l3) && (b1 + b2) == l1)
    {
        ok = true;
    }
    else if (b1 == (b2 + b3) && (l1 + l2) == b1)
    {
        ok = true;
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
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