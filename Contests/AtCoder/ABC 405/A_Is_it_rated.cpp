// 10/05/2025 18:00
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
    int r, x;
    cin >> r >> x;
    if (x == 1)
    {
        if (r >= 1600 && r <= 2999)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
    else
    {
        if (r >= 1200 && r <= 2399)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}