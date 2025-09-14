// 13/09/2025 21:07
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
    int n, m;
    cin >> n >> m;
    int ans = 0;

    vector<pair<int, int>> pr;
    pr.push_back({0, 0});
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        pr.push_back({a, b});
    }
    pr.push_back({m, 0});

    for (int i = 1; i <= (n + 1); i++)
    {
        pair<int, int> prev = pr[i - 1];
        pair<int, int> curr = pr[i];

        int val = (curr.first - prev.first);
        // cout<<val<<" "<<i<<nl;
        // cout<<curr.first<<" "<<prev.first<<nl;
        if (i == n + 1)
        {
            ans += val;
            break;
        }
        if (prev.second != curr.second)
        {
            if (val & 1)
            {
                ans += val;
            }
            else
            {
                ans += (val - 1);
            }
        }
        else
        {

            if (val & 1)
            {
                ans += (val - 1);
            }
            else
            {
                ans += (val);
            }
        }
        // cout<<i<<" "<<ans<<nl;
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