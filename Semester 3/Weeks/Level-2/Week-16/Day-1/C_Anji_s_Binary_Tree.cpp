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

const int maxN = 3e5 + 9;
string s;
vector<int> g[maxN], operations(maxN);

void dfs(int u)
{
    int l = g[u][0];
    int r = g[u][1];
    if (l != 0)
    {
        if (s[u - 1] != 'L')
        {
            operations[l] = operations[u] + 1;
        }
        else
        {
            operations[l] = operations[u];
        }
        dfs(l);
    }

    if (r != 0)
    {
        if (s[u - 1] != 'R')
        {
            operations[r] = operations[u] + 1;
        }
        else
        {
            operations[r] = operations[u];
        }
        dfs(r);
    }
}

void solve()
{
    int n;
    cin >> n;
    cin >> s;

    for (int i = 0; i <= n; i++)
    {
        g[i].clear();
        operations[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        g[i].push_back(l);
        g[i].push_back(r);
    }

    dfs(1);

    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (g[i][0] == 0 && g[i][1] == 0)
        {
            ans = min(ans, operations[i]);
        }
    }
    cout << ans << nl;
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