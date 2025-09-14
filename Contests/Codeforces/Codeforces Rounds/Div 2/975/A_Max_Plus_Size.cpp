// 28/07/2025 07:53
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
    vector<int> v;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mx = max(mx, x);
    }

    int cnt = n / 2;

    if (n % 2 == 1)
    {
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx && i % 2 == 0)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cnt++;
        }
    }

    cout << mx + cnt << nl;
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