// 09/09/2025 20:36
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

    int ans = 0;
    while (true)
    {
        bool ok = false, found = false;
        int z1 = -1, z2 = -1, on = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && !found)
            {
                found = true;
                on = i;
            }
            else if (s[i] == '0')
            {
                if (found)
                {

                    if (z1 == -1)
                    {
                        z1 = i;
                    }
                    else if (z2 == -1)
                    {
                        z2 = i;

                        swap(s[on], s[z2]);
                        // cout << s << nl;
                        ans++;

                        z1 = -1, z2 = -1;
                        ok = true;
                        break;
                    }
                }
            }
        }

        if (!ok)
        {
            if (z1 != -1)
            {
                ans++;
            }
            break;
        }
    }

    cout << ans << nl;
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