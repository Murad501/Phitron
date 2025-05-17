// 08/05/2025 02:50
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
    multiset<int> s;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n * 2; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        ans += x;
        if (i % 2 == 0)
        {
            auto val = s.begin();
            ans -= *val;
            s.erase(val);
        }
    }
    cout << ans << "\n";
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