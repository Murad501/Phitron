// 16/04/2025 21:07
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

    int zCnt = 0;
    int oddCnt = 0;

    if (x % 2 == 1)
    {
        oddCnt++;
    }
    if (y % 2 == 1)
    {
        oddCnt++;
    }
    if (z % 2 == 1)
    {
        oddCnt++;
    }
    if (x == 0)
    {
        zCnt++;
    }
    if (y == 0)
    {
        zCnt++;
    }
    if (z == 0)
    {
        zCnt++;
    }

    if (oddCnt == 3 || zCnt == 2)
    {
        zero;
    }
    else
    {
        int mx = max({x, y, z});
        cout << (x + y + z) - mx << nl;
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