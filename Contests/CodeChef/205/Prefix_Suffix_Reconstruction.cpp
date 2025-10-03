// 24/09/2025 20:59
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
    int n;
    cin >> n;
    vector<int> v;
    deque<int> dq;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x > 0)
        {

            mp[i + 1] = x;
        }
    }
    for (auto [key, value] : mp)
    {
        dq.push_back(key);
    }
    sort(dq.rbegin(), dq.rend());
    vector<int> ans(n + 1, 0);
    int sz = dq.size();
    for (int i = 0; i < sz; i++)
    {
        // cout << dq[i] << " " << mp[dq[i]] << nl;
        int times = mp[dq[i]];
        if (times > n)
        {
            // ans[1] = dq[i];
            ans[times - n] = dq[i];
        }
        else
        {   
            ans[n - times + 1] = dq[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        // cout << ans[i] << " ";
        if (ans[i] > 1)
        {
            cout << ans[i] << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }

    cout << nl;
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