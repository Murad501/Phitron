// 15/09/2025 21:38
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
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        swap(a[i], b[i]);
        int idx = -1;
        for (int j = i; j < n - 1; j++)
        {
            if (a[j] > a[j + 1] || b[j] > b[j + 1])
            {
                swap(a[j + 1], b[j + 1]);
                idx = j;
            }
        }
        if (idx != -1)
        {
            i = idx + 1;
            // cout << idx << " idx" << nl;
        }
        i++;
        // cout << i << " " << nl;
        cnt++;
    }

    int ans = 0;
    int curr = 1;
    int mod = 998244353;
    for (int i = 0; i < cnt; i++)
    {
        ans += (curr % mod);
        ans %= mod;
        curr *= 2;
        curr %= mod;
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