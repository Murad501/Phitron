// 17/09/2025 20:47
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
    vector<int> v, b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        ans += x;
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(v.rbegin(), v.rend());
    sort(all(b));
    int idx = 0;
    for (int i = 0; i < k; i++)
    {
        int val = b[i] + idx;
        // cout << val << nl;

        if (val > n)
        {
            break;
        }
        else
        {
            ans -= (v[val - 1]);
            idx = val;
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