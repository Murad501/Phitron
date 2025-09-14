// 06/08/2025 20:35
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
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 < a2 && b1 < b2)
    {
        cno;
    }
    else if (a1 == a2 && b1 == b2)
    {
        cyes;
    }
    else if (a1 > a2 && b1 > b2)
    {
        int avail = ((a1 - a2) * 5) + (b1 - b2);
        if (avail >= 0 && avail % 6 == 0)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
    else if (a1 > a2)
    {
        int avail = (a1 - a2) * 5;
        avail -= (b2 - b1);

        if (avail >= 0 && avail % 6 == 0)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
    else
    {
        int avail = b1 - b2;
        avail -= ((a2 - a1) * 5);
        // cout << avail << nl;
        if (avail >= 0 && avail % 6 == 0)
        {
            cyes;
        }
        else
        {
            cno;
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