// 01/05/2025 21:06
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
    int n, x;
    cin >> n >> x;
    if (x == 0)
    {
        if (n == 1)
        {
            minus;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << n << nl;
            }
            else
            {
                int sum = n - 2;
                sum += 5;
                cout << sum << nl;
            }
        }
    }
    else
    {

        int ones = __builtin_popcount(x);
        int ans = x;
        ans += n;
        ans -= ones;
        if (x != 1)
        {
            ans++;
        }
        else
        {

            ans = 5;
            int val = n - 2;
            ans += val;
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