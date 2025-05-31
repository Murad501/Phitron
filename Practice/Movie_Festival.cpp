// 19/05/2025 00:21
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
    map<int, set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].insert(y);
    }
    int ans = 1;

    int end = *mp.begin()->second.begin();

    for (auto [key, values] : mp)
    {
        int currEnd = *values.begin();
        if (currEnd <= end)
        {
            end = currEnd;
        }
        else
        {
            if (key >= end)
            {
                ans++;

                end = currEnd;
            }
        }
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}