// 15/10/2025 22:02
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, c;
    cin >> n >> c;
    vector<int> b, d, values;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
        ans += (x * b[i]);
        values.push_back(x * b[i]);
    }
    // cout<<ans<<nl;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = (i + 1) * c;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            int idx = j - (i + 1);
            if (idx < 0)
            {
                // cout << "idx " << idx << nl;
                idx = n + idx;
                // cout << "idx " << idx << nl;
                values[j] = min(values[j], (b[idx] * d[j]));
            }
            else
            {

                values[j] = min(values[j], (b[idx] * d[j]));
            }
            cnt+=values[j];
        }
        sum += cnt;
        // cout << i << " " << sum << nl;

        ans = min(sum, ans);
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