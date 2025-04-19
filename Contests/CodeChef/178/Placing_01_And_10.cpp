#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    int x, y;
    cin >> x >> y;
    string s;
    string t = "01";
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            s += t;
        }
        else
        {
            reverse(all(t));
            s += t;
            reverse(all(t));
        }
    }
    if (s[s.size() - 1] == '1')
    {
        t = "10";
    }
    else
    {
        t = "01";
    }

    if (y <= x)
    {
        for (int i = 0; i < y; i++)
        {
            if (i % 2 == 0)
            {
                s += t;
            }
            else
            {
                reverse(all(t));
                s += t;
                reverse(all(t));
            }
        }
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            if (i % 2 == 0)
            {
                s += t;
            }
            else
            {
                reverse(all(t));
                s += t;
                reverse(all(t));
            }
        }
        if (s[s.size() - 1] == '1')
        {
            t = "10";
        }
        else
        {
            t = "01";
        }
        for (int i = x; i < y; i++)
        {
            s += t;
        }
    }
    // cout << s << nl;
    int ans = 0;
    int sz = s.size();
    for (int i = 0; i < sz - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            ans++;
        }
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}