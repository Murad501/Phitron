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
    int cnt = 0;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u == v)
        {
            cnt++;
        }
        auto it = mp.find({u, v});
        auto it2 = mp.find({v, u});
        if (it == mp.end() && it2 == mp.end())
        {

            mp[{u, v}]++;
        }
        else
        {
            cnt++;
        }
    }

    cout << cnt << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}