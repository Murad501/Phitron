// 12/08/2025 17:23
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
    int ab = 0, ba = 0;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            ab++;
        }
        else if (s[i] == 'b' && s[i + 1] == 'a')
        {
            ba++;
        }
    }
    if (ab != ba)
    {
        if (ab > ba)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'a')
                {
                    s[i] = 'b';
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'b')
                {
                    s[i] = 'a';
                    break;
                }
            }
        }
        cout << s << nl;
    }
    else
    {
        cout << s << nl;
    }
    // cout << ab << " " << ba << nl;
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