// 07/08/2025 20:51
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
    string s;
    cin >> s;
    int left = 0, right = n + 1;
    for (int i = x; i < n; i++)
    {
        if (s[i] == '#')
        {
            right = i + 1;
            break;
        }
    }
    for (int i = x - 1; i >= 0; i--)
    {
        if (s[i] == '#')
        {
            left = i + 1;
            break;
        }
    }

    int r1 = abs((right - 1) - n) + 1;
    r1 = min(r1, x);

    int l1 = left+1;
    l1 = min(l1, ((n-x) + 1));
    cout << max(l1, r1) << nl;

    // int ans1 = abs(right - n) + 1, ans2 = x;
    // int ans3 = left+1, ans4 = (n - x) + 1;

    // cout << ans1 << " " << x << " " << ans2 << nl;
    // cout << ans3 << " " << x << " " << ans4 << nl;
    // cout << nl;
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