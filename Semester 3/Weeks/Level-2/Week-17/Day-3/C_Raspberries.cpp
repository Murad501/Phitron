#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    int even = 0, ans = k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++;
        if (x % k == 0)
            ans = 0;
        ans = min(ans, k - (x % k));
    }

    if (k == 4)
    {
        if (even >= 2)
        {
            zero;
        }
        else if (even == 1)
        {
            cout << min(ans, 1) << nl;
        }
        else
        {
            cout << min(ans, 2) << nl;
        }
    }
    else
    {
        cout << ans << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}