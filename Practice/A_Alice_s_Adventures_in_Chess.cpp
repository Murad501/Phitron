// 20/05/2025 10:46
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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    for (int i = 0; i < 10; i++)
    {
        s += s;
    }

    int x = 0, y = 0;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            y++;
        }
        else if (s[i] == 'E')
        {
            x++;
        }
        else if (s[i] == 'S')
        {
            y--;
        }
        else
        {
            x--;
        }
        if (x == a && y == b)
        {
            yes;
            return;
        }
    }
    no;
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