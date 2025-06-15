// 08/06/2025 20:47
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = 1;
    map<int, set<int>> mp;
    mp[1].insert(v[0]);
    int curr = 2;
    for (int i = 1; i < n; i++)
    {
        mp[curr - 1].erase(v[i]);
        if (mp[curr - 1].empty())
        {
            // cout<<i<<" ";
            ans++;
            mp[curr].insert(v[i]);
            curr++;
        }else{
            mp[curr].insert(v[i]);
        }
    }
    cout<<ans<<nl;
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