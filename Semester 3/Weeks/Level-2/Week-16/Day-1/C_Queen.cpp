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
    int n, root;
    cin >> n;
    vector<int> g[n + 1], bad(n + 1), a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;
        if (p != -1)
        {
            g[p].push_back(i);
        }
        else
        {
            root = i;
        }

        if (c == 1)
        {
            bad[p]++;
            a[i] = 1;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (root == i)
        {
            continue;
        }

        if (g[i].size() == bad[i] && a[i] == 1)
        {
            ans.push_back(i);
        }
    }

    if (ans.empty())
    {
        minus;
    }
    else
    {
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout<<nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}