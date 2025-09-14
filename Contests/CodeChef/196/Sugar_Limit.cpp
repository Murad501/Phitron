// 23/07/2025 20:47
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
    int ans = 0;
    map<int, vector<int>> mp;
    vector<int> a, b;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
        mn = min(mn, x);
        mx = max(mx, x);
    }

    for (int i = 0; i < n; i++)
    {
        mp[b[i]].push_back(a[i]);
    }

    for (int i = mn; i <= mx; i++)
    {
        int sum = (0 - i);
        for (auto [key, values] : mp)
        {
            if (key > i)
            {
                break;
            }
            else
            {
                int sz = values.size();
                for (int j = 0; j < sz; j++)
                {
                    if (values[j] > 0)
                    {
                        sum += values[j];
                    }
                }
            }
        }
        if (sum >= 0)
        {
            // cout << "sum 0" << " " << sum << nl;
            ans = max(ans, sum);
        }
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