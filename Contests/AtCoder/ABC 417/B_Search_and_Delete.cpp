// 02/08/2025 18:02
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mp[x]--;
    }

    for (auto [key, value] : mp)
    {
        if (value > 0)
        {
            for (int i = 0; i < value; i++)
            {
                cout << key << " ";
            }
        }
    }
    cout << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}