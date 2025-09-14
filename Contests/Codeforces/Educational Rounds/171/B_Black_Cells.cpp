// 21/07/2025 00:34
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MIN;
    int ans2 = INT_MIN;
    if (n == 1)
    {
        ans = 1;
    }
    int sz = n - 1;
    if (n & 1)
    {
        for (int i = 1; i < sz; i += 2)
        {
            ans2 = max(ans2, abs(a[i] - a[i + 1]));
        }
        sz = n - 2;
    }
    for (int i = 0; i < sz; i += 2)
    {
        ans = max(ans, abs(a[i] - a[i + 1]));
    }
    cout << min(ans, ans2) << nl;
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