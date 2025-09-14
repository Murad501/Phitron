// 01/08/2025 20:48
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
    int n, a, b;
    cin >> n >> a >> b;
    set<int> s;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        mn = min(mn, x), mx = max(mx, x);
    }
    int ans = mx - mn;
    int x = abs(a - b);
    if (x == 0)
    {
        x = a;
    }

    while (true)
    {
        s.erase(mn);
        int diff = mx - mn;
        int cnt = diff / x;
        int val = mn + (cnt * x);
        s.insert(val);

        int curr = *s.begin();
        int temp = mx - curr;
        // cout<<temp<<" "<<x<<" "<<diff<<" "<<val<<" "<<curr<<nl;
        if (temp >= ans)
        {
            break;
        }
        else
        {
            mn = curr;
            ans = temp;
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