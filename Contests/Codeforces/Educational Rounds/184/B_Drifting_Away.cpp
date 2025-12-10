// 14/11/2025 21:09
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
    string s;
    cin >> s;
    int n = s.size();
    int l = -1, r = -1;
    bool ok = false;
    set<int> indexes;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            if (r == -1 && i < n - 1)
            {
                r = i;
            }
            else
            {
                l = i;
            }
        }
        else if (s[i] == '<')
        {
            l = i;
        }
        else if (s[i] == '>')
        {
            if (r == -1)
            {
                r = i;
            }
        }
    }

    if (l > r && l >= 0 && r >= 0)
    {
        minus;
    }
    else
    {
        if (l >= 0 && r >= 0)
        {
            int ans = 0;
            ans = l + 1;
            ans = max(ans, n - r);
        
            l = -1, r = -1;

            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == '*')
                {
                    if (l == -1 && i > 0)
                    {
                        l = i;
                    }
                    else
                    {
                        r = i;
                    }
                }
                else if (s[i] == '<')
                {
                    if (l == -1)
                    {
                        l = i;
                    }
                }
                else if (s[i] == '>')
                {
                    r = i;
                }
            }

            // cout << l << " " << r << nl;
            ans = max(ans, l + 1);
            ans = max(ans, n - r);
            cout << ans << nl;
        }
        else
        {
            cout << n << nl;
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