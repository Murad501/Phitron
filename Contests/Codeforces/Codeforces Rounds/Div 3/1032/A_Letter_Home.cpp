// 17/06/2025 20:36
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
    int n, s;
    cin >> n >> s;
    vector<int> v;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mn = min(mn, x), mx = max(mx, x);
    }

    int ans = INT_MAX;
    if (s > mx)
    {
        ans = abs((s - mn));
    }
    else if (s < mn)
    {
        ans = abs((mx - s));
    }
    else
    {
        int ans1 = (s - mn) + (mx - mn);
        int ans2 = (mx - s) + (mx - mn);
        ans = min(ans1, ans2);
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