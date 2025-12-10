// 29/10/2025 20:38
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    vector<int> v;
    map<int, int> mp;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
        mx = max(mx, x), mn = min(x, mn);
    }
    map<int, int> ans;
    int prev = mn;
    for (auto [key, value] : mp)
    {
        if (key == mn || key == mx)
        {
            ans[key] = -1;
        }
        else
        {
            int next = mp.upper_bound(key)->first;
            int rem = (((key - prev) - 1) / 2);
            int rem2 = (next - key) - 1;
            int cnt = rem + (rem2 / 2);
            if (rem2 & 1)
            {
                cnt++;
            }
            // cout<<rem<<" "<<rem2<<" "<<nl;
            ans[key] = cnt + 1;
            prev = key;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[v[i]] << " ";
    }
    cout << nl;
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