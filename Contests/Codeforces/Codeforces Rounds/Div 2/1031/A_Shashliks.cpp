// 15/06/2025 15:05
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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    int ans1 = 0, ans = 0;
    int k1 = k;
    if (k1 >= a)
    {
        ans1++;
        int av = k1 - a;

        int cnt = (av / x);

        ans1 += cnt;
        k1 -= (x * cnt);
        k1 -= x;
    }

    if (k1 >= b)
    {
        ans1++;
        int av = k1 - b;

        int cnt = (av / y);

        ans1 += cnt;
        
    }

    if (k >= b)
    {
        ans++;
        int av = k - b;

        int cnt = (av / y);

        ans += cnt;
        k -= (y * cnt);
        k -= y;
    }
    if (k >= a)
    {
        ans++;
        int av = k - a;
        int cnt = (av / x);
        ans += cnt;
        
    }

    cout << max(ans1, ans) << nl;
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