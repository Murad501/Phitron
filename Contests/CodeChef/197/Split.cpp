// 30/07/2025 20:56
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
    string s;
    cin >> s;

    int ans = n / k;

    int l = 1, r = ans;
    // cout << l << " " << r << nl;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        int cnt = 0, o = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                o++;
                o = max(z + 1, o);
                if (o == mid)
                {
                    // cout<<"hello "<<mid<<" "<<i<<nl;
                    cnt++;
                    o = 0;
                    z = 0;
                }
            }
            else
            {
                z++;
                if (z == mid)
                {
                    cnt++;
                    o = 0;
                    z = 0;
                }
            }
        }

        if (cnt >= k)
        {
            l = mid + 1;
        }
        else
        {
            // cout<<"hello"<<" "<<mid<<nl;
            ans = mid - 1;
            r = mid - 1;
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