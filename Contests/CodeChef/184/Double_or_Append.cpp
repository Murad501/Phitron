// 30/04/2025 20:41
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
    int m;
    cin >> m;
    int mex = 1;
    map<int, int> mp, cnt, last;
    int ans = 0;
    int sz = 1;
    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            mp[mex] = sz;
            last[mex] = sz;
            mex++;
            ans += sz;
            sz++;
            v.push_back(mex);
            cnt[mex] = 1;
        }
        else
        {
            cout<<"sz - "<<sz<<nl;
            int sz = v.size();
            for (int j = 0; j < sz; j++)
            {
                int n = cnt[v[j]];
                int curr = last[v[j]];
                for (int k = 0; k < n; k++)
                {
                    ans += (curr + mp[v[j]]);
                    last[v[j]] = last[v[j]] + mp[v[j]];
                }
                cnt[v[j]] = cnt[v[j]] * 2;
            }
        }
        cout << ans << " ";
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