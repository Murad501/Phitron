// 06/08/2025 08:47
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
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    int n = s.size(), m = t.size();
    bool ok = false;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {

            i++, j++;
            if (j == m)
            {
                ok = true;
            }
        }
        else if (s[i] == '?')
        {
            s[i] = t[j];
        }
        else
        {
            while (s[i] != t[j] && i < n)
            {
                if (s[i] == '?')
                {
                    s[i] = t[j];
                    break;
                }
                i++;
            }
        }
    }
    if (ok)
    {
        yes;
        // cout<<s<<nl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                cout << 'a';
            }
            else
            {
                cout << s[i];
            }
        }
        cout << nl;
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