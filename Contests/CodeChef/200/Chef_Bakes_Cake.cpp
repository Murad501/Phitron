// 20/08/2025 20:31
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
    int n, x, y;
    cin >> n >> x >> y;
    int ans = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x * i <= y)
        {
            cnt = i;
        }
        else
        {
            break;
        }
    }

    ans = n / cnt;
    if (n % cnt)
    {
        ans++;
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}