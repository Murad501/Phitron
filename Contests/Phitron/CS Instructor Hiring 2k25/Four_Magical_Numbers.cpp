// 03/11/2025 21:55
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    vector<int> v, evens, odds;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x & 1)
        {
            odds.push_back(x);
        }
        else
        {
            evens.push_back(x);
        }
    }
    sort(all(v));
    int x = abs(v[0]), y = abs(v[n - 1]);
    x = max(x, y);
    cout << x * x << " ";

    x = v[0], y = v[n - 1];
    if (x > 0 && y > 0)
    {
        cout << v[0] * v[0] << " ";
    }
    else if (y > 0)
    {
        cout << x * y << " ";
    }
    else
    {
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, abs(v[i]));
        }
        cout << mn * mn << " ";
    }
    cout << v[n - 1] * 2 << " ";
    cout << v[0] * 2 << " ";
    cout << nl;
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