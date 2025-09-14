// 13/08/2025 20:50
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
    if (n % 2 == 0)
    {
        int ans = n / 2;
        int temp = n / 2;
        if (temp % 2 == 1)
        {
            ans += (temp / 2) + 1;
        }
        else
        {
            n -= 2;
            temp = n / 2;
            ans += (temp / 2) + 1;
        }
        cout << ans << nl;
    }
    else
    {
        int ans = n / 2;
        ans++;
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