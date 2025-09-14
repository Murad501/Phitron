// 13/08/2025 11:20
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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int sz = v.size();
        if (i == 0)
        {
            v.push_back(x);
            continue;
        }

        if (x == 0)
        {
            if (v[sz - 1] != 0)
            {
                v.push_back(x);
            }
        }
        else
        {
            if (v[sz - 1] == 0)
            {
                v.push_back(x);
            }
        }
    }
    int sz = v.size();
    for (int i = 0; i < sz; i++)
    {
        if (v[i] != 0)
        {
            ans++;
        }
    }
    ans = min(ans, 2LL);
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