// 23/07/2025 20:31
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
    int n, c;
    cin >> n >> c;
    vector<int> v;
    multiset<int> mt;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mt.insert(x);
        mn = min(x, mn);
    }

    int ans = 0;
    if (c <= mn)
    {
        ans += (mn + 1 - c);
        c = mn + 1;
    }

    while (true)
    {
        auto it = mt.lower_bound(c);
        if (it == mt.end())
        {
            break;
        }
        else
        {
            if (*it == c)
            {
                c++;
                ans++;
            }
            else
            {
                break;
            }
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