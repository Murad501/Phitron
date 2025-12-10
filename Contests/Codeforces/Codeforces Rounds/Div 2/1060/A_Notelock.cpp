// 19/10/2025 20:36
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;

    int i = 0;
    while (i < n)
    {
        if (s[i] == '1')
        {
            bool ok = false;
            int start = i - k +1;
            if (start < 0)
            {
                start = 0;
            }
            // cout<<start<<nl;
            for (int j = start; j < i; j++)
            {
                if (s[j] == '1')
                {
                    ok = true;
                    break;
                }
            }
            if (!ok)
            {
                ans++;
            }
        }
        i++;
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