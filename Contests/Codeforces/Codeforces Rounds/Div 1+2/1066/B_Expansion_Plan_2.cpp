// 23/11/2025 15:48
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
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int cnt4 = 0, cnt8 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '4')
        {
            cnt4++;
        }
        else
        {
            cnt8++;
        }
    }

    x = abs(x), y = abs(y);

    if (x > n || y > n)
    {
        no;
    }
    else
    {
        int extra = n - x;
        int rem = max(0LL, cnt4 - extra);

        if (y <= n - rem)
        {
            yes;
        }
        else
        {
            no;
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