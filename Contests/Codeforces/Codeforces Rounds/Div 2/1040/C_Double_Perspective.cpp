// 01/08/2025 19:12
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
    map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (mp.count(a))
        {
            if (mp[a].first < b)
            {
                mp[a] = {b, i};
            }
        }
        else
        {
            mp[a] = {b, i};
        }
    }
    vector<int> ans;
    cout << mp.size() << nl;
    for (auto [key, values] : mp)
    {
        ans.push_back(values.second + 1);
    }
    sort(all(ans));
    int m = ans.size();
    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
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