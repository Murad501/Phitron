// 06/07/2025 20:39
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
    vector<int> v, c, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        c.push_back(x);
    }
    bool ok = false;
    sort(all(c));

    for (int i = 0; i < n; i++)
    {
        if (v[i] != c[i])
        {
            ans.push_back(v[i]);
        }
    }

    if (ans.size() > 1)
    {
        ok = true;
    }
    if (ok)
    {

        yes;
        cout << ans.size() << nl;
        int sz = ans.size();
        for (int i = 0; i < sz; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    else
    {
        no;
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