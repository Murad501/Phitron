// 06/08/2025 08:59
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
    int l, r;
    cin >> l >> r;
    int ans = 0;
    int cnt = 0;

    int curr = 1;
    while (curr <= r)
    {
        int mx = curr * 3;
        if (l > (mx - 1))
        {
            curr = mx;
        }
        else
        {
            if (l <= curr && r >= (mx - 1))
            {
                int val = mx - curr;
                ans += (val * cnt);
            }
            else if (curr <= l && (mx - 1) <= r)
            {
                int val = mx - max(curr, l);
                ans += (val * cnt);
            }
            else
            {
                int val = min(r, (mx - 1)) - curr;
                ans += (val * cnt);
            }
            curr = mx;
        }

        cnt++;
    }
    cout<<ans<<nl;
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