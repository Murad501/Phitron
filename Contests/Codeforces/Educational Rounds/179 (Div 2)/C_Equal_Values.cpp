// 03/06/2025 21:04
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
    map<int, int> mp;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int l = 1, r = 1;

    while (r < (n - 1))
    {
        while (v[l] == v[r])
        {
            r++;
        }
        r--;
        // cout << "ehll " << (r - (l + 1)) << nl;
        int len = r - l + 1;
        // cout<<v[l]<<" "<<l<<" "<<r<<nl;
        int key = v[l];
        if ((l == 1 && v[l] == v[0]) || (r == n - 2 && v[r] == v[n - 1]))
        {
            len++;
        }

        ans = min(ans, (key * (n - len)));
        // mp[key] = max(mp[key], len);
        r++;
        l = r;
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