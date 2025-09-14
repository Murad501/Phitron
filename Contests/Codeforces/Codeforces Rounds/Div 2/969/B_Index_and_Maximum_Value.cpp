// 01/08/2025 20:30
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
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mx = max(x, mx), mn = min(x, mn);
    }

    for (int i = 0; i < m; i++)
    {
        char c;
        cin >> c;
        int x, y;
        cin >> x >> y;
        if (c == '-')
        {
            if (x <= mn && y >= mn)
            {
                mn--;
            }
            if (x <= mx && y >= mx)
            {
                mx--;
            }
        }
        else
        {
            if (x <= mn && y >= mn)
            {
                mn++;
            }
            if (x <= mx && y >= mx)
            {
                mx++;
            }
        }
        cout << mx << " ";
    }
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