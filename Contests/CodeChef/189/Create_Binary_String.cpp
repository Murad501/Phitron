// 04/06/2025 20:55
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
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int ans = a * n;
    for (int i = 1; i <= n; i++)
    {
         int ans1 = (i * b) + (((n - i) * i) * d) + ((n - i) * a);
         int ans2 = (i * b) + (((n - i) * i) * c) + ((n - i) * a);
        //  cout<<ans1<<" "<<ans2<<" "<<i<<nl;
         ans = max({ans, ans1, ans2});
    }
    cout<<ans<<nl;
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