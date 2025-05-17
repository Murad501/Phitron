// 19/04/2025 18:08
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
    vector<int> v;
    map<int, vector<int>> mp;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
    }
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp = mp[b[i]];
        int sz = temp.size();
        for (int j = 0; j < sz; j++)
        {
            v[temp[j]]--;
            if (v[temp[j]] == 0)
            {
                ans++;
            }
        }
        cout << ans << nl;
    }
    cout << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}