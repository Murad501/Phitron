// 23/09/2025 20:42
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
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            mp[j].push_back(x);
        }
    }

    int ans = 0;
    for (auto [key, values] : mp)
    {
        sort(all(values));
        int cnt = 1, sum = 0, prev = 0;
        for (int i = 1; i < n; i++)
        {
            int diff = values[i] - values[i - 1];
            prev += diff;
            sum += (prev * (cnt - 1));
            sum += diff;
            cnt++;
        }
        // cout << sum << " ";
        ans += sum;
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