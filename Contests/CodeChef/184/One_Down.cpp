// 30/04/2025 20:48
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
    string s, t;
    cin >> s >> t;

    bool ok = true;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] == '0')
            {
                ok = false;
                break;
            }
            else
            {
                cnt++;
            }
        }
    }

    if (ok)
    {
        if (cnt % 2 == 1)
        {
            ok = false;
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
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