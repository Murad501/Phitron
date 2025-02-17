#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    map<int, set<int>> mp;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[u].insert(v);
        mp[v].insert(u);
    }

    int leaf;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i].size() == 1)
        {
            leaf = i;
            break;
        }
    }

    int x, y;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i].find(leaf) != mp[i].end())
        {
            y = mp[i].size() - 1;
            leaf = i;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (mp[i].find(leaf) != mp[i].end() && mp[i].size() > 1)
        {
            x = mp[i].size();
            break;
        }
    }
    cout << x << " " << y << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}