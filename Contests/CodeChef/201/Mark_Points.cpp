// 27/08/2025 20:37
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
    string s;
    cin >> s;

    bool ok = true;
    int cnt = 0;
    int l = 0;
    while (l < n)
    {
        if (s[l] == '1')
        {
            cnt++;
        }
        else
        {
            if (cnt > 0 && cnt < 3)
            {
                ok = false;
                break;
            }
            else
            {
                cnt = 0;
            }
        }

        l++;
    }

    if (cnt > 0 && cnt < 3)
    {
        ok = false;
    }

    if (ok)
    {
        cyes;
    }
    else
    {
        cno;
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