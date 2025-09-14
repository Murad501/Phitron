// 03/08/2025 10:30
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
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        bool ok2 = true;
        string s;
        for (int j = 0; j < n; j++)
        {
            if (ok)
            {
                if (ok2)
                {

                    s += "##";
                }
                else
                {
                    s += "..";
                }
            }
            else
            {
                if (!ok2)
                {
                    s += "##";
                }
                else
                {
                    s += "..";
                }
            }
            ok2 = !ok2;
            // cout<<nl;
        }
        cout << s << nl;
        cout << s << nl;

        ok = !ok;
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