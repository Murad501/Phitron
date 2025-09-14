// 21/07/2025 23:18
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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> v[i];
    }

    int ans = n;
    int cnt = 0;

    for (int i = 2; i <= n; i++)
    {
        int len = 0;

        if (v[i] == (n + 1) - i)
        {
            len = i - 1;
            int j = 2;

            while (j <= n)
            {
                if (v[j] == (n + 1 + len) - j)
                {
                    len += (j - 1);
                    j = 2;
                }
                else
                {
                    j++;
                }
                cnt++;
            }
        }
        // cout << i << " len " << len << nl;
        ans = max(ans, (len + n));
    }
    cout << ans<<" "<<cnt << nl;
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