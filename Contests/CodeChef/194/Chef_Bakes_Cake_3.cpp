// 13/07/2025 20:35
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
    vector<int> a;
    int mn = INT_MAX, mx = INT_MIN, total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        mn = min(mn, x);
        mx = max(mx, x);
        total += x;
    }

    int ans = 0;
    // cout<<mn<<" "<<mx<<nl;

    for (int i = mn; i <= mx; i++)
    {
        int profit = 0;
        for (int j = 0; j < n; j++)
        {
            int cost = (i * 30);
            int val = min(a[j], i);
            int sell = val * 50;

            // cout<<sell<<" "<<cost<<nl;
            profit += (sell - cost);
        }
        
        ans = max(profit, ans);
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