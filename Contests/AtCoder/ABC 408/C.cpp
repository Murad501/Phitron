// 31/05/2025 18:14
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
    // map<int, int>mp;
    vector<int> v(n + 5, 0);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        v[l]++;

        v[r + 1]--;
    }
    vector<int> pre(n + 1, 0);
    pre[1] = v[1];
    int ans = v[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
        ans = min(ans, pre[i]);
    }

    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}