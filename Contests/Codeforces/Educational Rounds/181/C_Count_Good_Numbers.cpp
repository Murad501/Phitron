// 22/07/2025 21:37
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
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    cnt += (r / 2 - (l - 1) / 2);
    cnt += (r / 3 - (l - 1) / 3);
    cnt += (r / 5 - (l - 1) / 5);
    cnt += (r / 7 - (l - 1) / 7);

    cnt -= (r / 6 - (l - 1) / 6);
    cnt -= (r / 10 - (l - 1) / 10);
    cnt -= (r / 14 - (l - 1) / 14);
    cnt -= (r / 15 - (l - 1) / 15);
    cnt -= (r / 21 - (l - 1) / 21);
    cnt -= (r / 35 - (l - 1) / 35);

    cnt += (r / 30 - (l - 1) / 30);
    cnt += (r / 42 - (l - 1) / 42);
    cnt += (r / 70 - (l - 1) / 70);
    cnt += (r / 105 - (l - 1) / 105);

    cnt -= (r / 210 - (l - 1) / 210);

    cout << (r - l + 1) - cnt << nl;
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