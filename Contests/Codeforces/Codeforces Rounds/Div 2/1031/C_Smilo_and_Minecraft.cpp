// 15/06/2025 22:17
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
    int n, m, k;
    cin >> n >> m >> k;
    char s[n + 2][m + 2];
    int prefix_sum[n + 2][m + 2];
    memset(prefix_sum, 0, sizeof prefix_sum);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == 'g')
            {
                prefix_sum[i][j] = 1, sum++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix_sum[i][j] += prefix_sum[i - 1][j];
            prefix_sum[i][j] += prefix_sum[i][j - 1];
            prefix_sum[i][j] -= prefix_sum[i - 1][j - 1];
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i][j] == '.')
            {
                int mxr = min(n, i + k - 1);
                int mxc = min(m, j + k - 1);

                int mnr = max(1LL, i - k + 1);
                int mnc = max(1LL, j - k + 1);

                int gold = prefix_sum[mxr][mxc] - prefix_sum[mnr - 1][mxc] - prefix_sum[mxr][mnc - 1] + prefix_sum[mnr - 1][mnc - 1];
                ans = max(ans, sum - gold);
            }
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