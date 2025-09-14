// 01/08/2025 10:59
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
    int x, y, c;
    cin >> x >> y >> c;
    vector<int> ans;
    int X = x * c, Y = y * c;
    if (x == 0 && y == 0)
    {
        // cout << X << " " << Y << nl;
        if (c % 2 == 0)
        {
            for (int i = 1; i <= (c) / 2; i++)
            {
                cout << i << " " << i << nl;
                cout << "-" << i << " " << "-" << i << nl;
            }
        }
        else
        {
            cout << X << " " << Y << nl;
            for (int i = 1; i <= (c - 1) / 2; i++)
            {
                cout << i << " " << i << nl;
                cout << "-" << i << " " << "-" << i << nl;
            }
        }
    }
    else
    {
        cout << X << " " << Y << nl;
        if (c % 2 == 0)
        {
            cout << 0 << " " << 0 << nl;
            c--;
        }

        for (int i = 1; i <= (c - 1) / 2; i++)
        {
            cout << i << " " << i << nl;
            cout << "-" << i << " " << "-" << i << nl;
        }
    }
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