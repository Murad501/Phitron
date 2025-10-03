// 24/09/2025 20:35
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
    int ans = 0;
    while (y)
    {
        if (x >= 2)
        {
            ans += 2;
            y--;
            x -= 2;
        }
        else if (x == 1)
        {
            ans += 2;
            x--;
            y -= 2;
        }else{
            y-=3;
            ans+=2;
        }
    }
    while (x)
    {
        ans++;
        x -= 3;
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