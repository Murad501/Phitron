// 06/11/2025 21:08
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a, b, c;
    map<int, int> mp;
    vector<pair<int, int>> pr, pr2;

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
        b.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            pr2.push_back({b[i], x});
        }
        else
        {

            pr.push_back({b[i], x});
        }
    }

    sort(all(pr));
    int ans = 0;
    int sz = pr.size();
    for (int i = 0; i < sz; i++)
    {
        auto it = mp.lower_bound(pr[i].first);
        if (it != mp.end())
        {
            int val = it->first;
            mp[val]--;
            if (mp[val] == 0)
            {
                mp.erase(val);
            }
            if (pr[i].second)
            {
                int newItem = max(val, pr[i].second);
                mp[newItem]++;
            }
        }
        else
        {

            break;
        }
        ans++;
    }

    sz = pr2.size();
    sort(all(pr2));
    for (int i = 0; i < sz; i++)
    {
        auto it = mp.lower_bound(pr2[i].first);
        if (it != mp.end())
        {
            int val = it->first;
            mp[val]--;
            if (mp[val] == 0)
            {
                mp.erase(val);
            }
        }
        else
        {
            break;
        }
        ans++;
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