// 14/05/2025 21:05
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
const int mod = 998244353;

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
    bool ok = true;
    sort(all(v));
    for (int i = 1; i <= n; i++)
    {
        if (i > v[i - 1])
        {
            ok = false;
            break;
        }
    }

    int ans = 0;
    if (ok)
    {
        ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans = ans % mod;
            ans = ((v[i] - i) * ans) % mod;
        }
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