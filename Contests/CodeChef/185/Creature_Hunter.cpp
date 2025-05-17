// 07/05/2025 21:23
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
    int N, H;
    cin >> N >> H;
    int v1 = INT_MIN, v2 = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        int s, d;
        cin >> s >> d;
        if (s == 1)
        {
            v1 = max(v1, d);
        }
        else
        {
            v2 = max(v2, d);
        }
    }

    if (v1 != INT_MIN && v1 * 2 >= v2)
    {
        int ans = H / v1;
        if (H % v1)
        {
            ans++;
        }
        cout << ans << nl;
    }
    else if(v2 != INT_MIN)
    {
        int ans = (H / v2) * 2;
        if (H % v2)
        {
            if (H % v2 <= v1)
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
        cout << ans << nl;
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