// 10/05/2025 18:02
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
    vector<int> t;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        t.push_back(x);
    }
    vector<int> v(m + 1);
    for (int i = 1; i <= m; i++)
    {
        v[i] = 0;
    }
    int ans = 0;
    for (auto [key, value] : mp)
    {
        if (key <= m)
        {
            v[key] = 1;
        }
    }

    bool ok = true;
    for (int i = 1; i <= m; i++)
    {
        if (v[i] == 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            ans++;
            int val = t[i];
            if (val <= m)
            {

                mp[val]--;
                if (mp[val] == 0)
                {
                    break;
                }
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