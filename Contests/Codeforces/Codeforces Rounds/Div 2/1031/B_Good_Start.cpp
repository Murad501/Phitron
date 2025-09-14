// 15/06/2025 15:43
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
    int w, h, a, b;
    cin >> w >> h >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 != x2 && (x1 - x2) % a == 0) || (y1 != y2 && ((y1 - y2) % b == 0)))
    {
        cyes;
    }
    else
    {
        cno;
    }

    // cout<<sideEnd<<" "<<sideStart<<nl;
    // cout<<sideEnd2<<" "<<sideStart2<<nl;
    // cout<<diff<<" "<<diff2<<nl;
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