// 16/11/2025 20:50
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
// #define int long long
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

// pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    map<int, vector<int>> mp;
    pbds<int> indexes;

    int mxx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x].push_back(i);
        indexes.insert(i);
        mxx = max(mxx, x);
    }
    // cout << indexes.size() << nl;

    ll ans = 0;
    int sz = n;
    for (auto [key, values] : mp)
    {
        int sz = values.size();
        for (int i = 0; i < sz; i++)
        {

            int id = values[i];
            int next;
            auto nxt = indexes.upper_bound(id);
            if (nxt == indexes.end())
            {
                next = *indexes.begin();
            }
            else
            {
                next = *nxt;
            }
            int idx = indexes.order_of_key(id);
            int prev;
            if (idx == 0)
            {
                prev = *indexes.rbegin();
            }
            else
            {
                prev = *indexes.find_by_order(idx - 1);
            }
            int prevV = v[prev];
            int nextV = v[next];
            int mn = min(prevV, nextV);
            ans += (mn * 1LL);
            indexes.erase(id);
        }
    }
    cout << ans - mxx << nl;
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