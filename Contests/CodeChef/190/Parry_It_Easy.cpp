// 11/06/2025 21:08
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
    int n, x;
    cin >> n >> x;
    vector<int> a, b, values;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a.push_back(val);
        mp[val] = i;
    }
    for (auto [key, value] : mp)
    {
        values.push_back(key);
    }
    reverse(all(values));

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        b.push_back(val);
    }

    // cout<<values.size()<<nl;
    // cout<<nl;
    int ans = 0;
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        int val = values[id];
        int idx = mp[val];
        for (int j = i; j <= idx; j++)
        {
            if (x >= b[j] && x > val)
            {
                ans++;
                x--;
            }
            i = j;
        }
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