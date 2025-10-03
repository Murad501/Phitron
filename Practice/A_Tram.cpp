// 16/09/2025 20:15
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
    int ans = INT_MIN;
    int a, b;
    cin >> a >> b;
    int curr = b;
    ans = curr;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        curr += y;
        curr -= x;

        ans = max(ans, curr);
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}