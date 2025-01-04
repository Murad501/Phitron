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

void solve()
{
    int l, r;
    cin >> l >> r;
    int maxBit_l = __lg(l);
    int maxBit_r = __lg(r);
    int maxBit = max(maxBit_l, maxBit_r);
    int diff = maxBit_r - maxBit_l;
    cout<<diff<<nl;
    if (diff > 1)
    {
        cout << (1 << maxBit) << " " << (1 << maxBit) - 1 << " " << (1 << maxBit - 1) - 1 << nl;
    }
    // else if (diff > 0)
    // {
    //     cout << (1 << maxBit) << " " << (1 << maxBit) - 1 << " " << (1 << maxBit - 1) - 1 << nl;
    // }
    // else
    // {
    //     cout << (1 << maxBit) << " " << (1 << maxBit) - 1 << " " << (1 << maxBit - 1) - 1 << nl;
    // }
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