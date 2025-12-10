// 03/11/2025 22:25
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

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    for (int l = 1; l <= t; l++)
    {
        int n, k;
        cin >> n >> k;

        map<int, set<int>> mp;
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            mp[u].insert(v);
            mp[v].insert(u);
        }

        int ans = 1;

        set<int> values = mp[k];

        for (auto key : values)
        {
            vector<bool> vis(n + 1);
            vis[k] = true;
            queue<int> qw;
            qw.push(key);
            int cnt = 0;
            while (!qw.empty())
            {
                int val = qw.front();
                qw.pop();
                vis[val] = true;
                cnt++;
                for (auto ky : mp[val])
                {
                    if (!vis[ky])
                    {
                        qw.push(ky);
                    }
                }
            }
            ans = max(ans, cnt);
        }

        cout << "Case " << l << ": " << ans << nl;
    }

    return 0;
}