// 29/10/2025 21:02
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ze = 0, on = 0;
    bool ok = true;
    int idx = -1;
    ;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ze++;
        }
        else
        {
            on++;
        }

        if (on > ze)
        {
            idx = i;
            ok = false;
            break;
        }
    }

    if (ok)
    {
        if (ze == on)
        {
            zero;
        }
        else
        {
            cout << 1 << nl;
        }
    }
    else
    {
        if (!ze)
        {
            bool ok = false;
            for (int i = idx; i < n; i++)
            {
                if (s[i] == '0')
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                cout << 2 << nl;
            }
            else
            {
                cout << 1 << nl;
            }
        }
        else
        {
            bool ok = false;

            on--;
            for (int i = idx; i < n; i++)
            {
                if (s[i] == '1')
                {
                    if (on < ze)
                    {
                        on++;
                    }
                }
                else
                {
                    ze++;
                }
            }
            if (ze == on)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 2 << nl;
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