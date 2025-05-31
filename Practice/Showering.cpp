// 22/05/2025 21:53
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
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v;
    v.push_back({0, 0});
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v.push_back({l, r});
    }
    v.push_back({m, m});
    bool ok = false;
    for (int i = 0; i <= n; i++)
    {
        int diff = (v[i + 1].first - v[i].second);

        if (diff >= s)
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
    }
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