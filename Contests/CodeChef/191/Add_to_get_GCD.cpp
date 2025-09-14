// 18/06/2025 20:33
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
    int x, y;
    cin >> x >> y;
    int gcd = __gcd(x, y);

    int ans = 0;
    if (gcd == 1)
    {
        if (x % 2 == 1 && y % 2 == 1)
        {
            int tx = x;
            int ty = y;
            tx++;
            gcd = __gcd(tx, ty);
            if (gcd == 1)
            {
                tx--;
                ty++;
                gcd = __gcd(tx, ty);
                if (gcd == 1)
                {
                    ans = 2;
                }
                else
                {
                    ans = 1;
                }
            }
            else
            {
                ans = 1;
            }
        }
        else
        {
            ans = 1;
        }
    }
    cout << ans << nl;
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