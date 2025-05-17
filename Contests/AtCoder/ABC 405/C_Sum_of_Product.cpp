// 10/05/2025 18:17
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

    vector<int> sum, preSum;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (i > 0)
        {

            sum.push_back(x * v[0]);
        }
    }

    reverse(all(sum));
    preSum.push_back(sum[0]);

    for (int i = 1; i < n - 1; i++)
    {
        preSum.push_back((sum[i] + preSum[i - 1]));
    }
    reverse(all(preSum));

    int ans = preSum[0];
    ;
    for (int i = 1; i < n - 1; i++)
    {

        ans += (preSum[i] / v[0]) * v[i];
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}