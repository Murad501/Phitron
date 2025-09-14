// 08/07/2025 22:00
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
    vector<vector<int>> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
            if (x % m == 0)
            {
                mp[x] = i;
            }
        }
        v.push_back(tmp);
    }

    if (mp.size() != n)
    {
        minus;
    }
    else
    {

        vector<int> ans;
        bool ok = true;
        for (auto [key, value] : mp)
        {
            ans.push_back(value);
            vector<int> tmp = v[value];
            sort(all(tmp));

            for (int i = 0; i < m - 1; i++)
            {
                int diff = tmp[i + 1] - tmp[i];
                if (diff != n)
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                break;
            }
        }
        if (ok)
        {
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] + 1 << " ";
            }
            cout << nl;
        }
        else
        {
            minus;
        }
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