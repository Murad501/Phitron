// 10/10/2025 16:01
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
    string s;
    cin >> s;
    char a = s[0], b = s[1], c = s[3], d = s[4];
    if (s[0] == s[1] && s[1] == s[3] && s[3] == s[4])
    {
        cout << s << nl;
    }
    else
    {
        if (s[0] == '0')
        {
            cout << "11:11" << nl;
        }
        else if (s[0] == '1')
        {
            if (b < '1' || (b == '1' && c < '1') || (b == '1' && c == '1' && d <= '1'))
            {
                cout << "11:11" << nl;
            }
            else
            {
                cout << "22:22" << nl;
            }
        }
        else
        {
            if (b < '2' || (b == '2' && c < '2') || (b == '2' && c == '2' && d <= '2'))
            {
                cout << "22:22" << nl;
            }
            else
            {
                cout << "00:00" << nl;
            }
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