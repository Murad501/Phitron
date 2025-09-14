// 17/07/2025 20:49
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
    int n, k;
    cin >> n >> k;

    map<pair<int, int>, vector<int>> pr;

    set<int> s;
    s.insert(k);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        pr[{x, y}].push_back(z);
    }

    vector<int> ans;
    ans.push_back(k);
    while (!pr.empty())
    {
        bool found = false;
        vector<pair<int, int>> temp;
        for (auto [keys, values] : pr)
        {
            auto it = s.lower_bound(keys.first);
            if (it != s.end())
            {
                if (*it <= keys.second)
                {

                    int sz = values.size();
                    for (int i = 0; i < sz; i++)
                    {
                        s.insert(values[i]);
                        ans.push_back(values[i]);
                    }
                    temp.push_back(keys);
                    found = true;
                }
            }
        }
        if (!found)
        {
            break;
        }

        int m = temp.size();
        for (int i = 0; i < m; i++)
        {
            pr.erase(temp[i]);
        }
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans[0] << nl;

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