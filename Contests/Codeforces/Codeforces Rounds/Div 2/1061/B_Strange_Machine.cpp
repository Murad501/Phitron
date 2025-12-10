// 24/10/2025 20:39
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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    bool isOk = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            isOk = true;
            break;
        }
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (isOk)
        {
            int curr = 0;
            int ans = 0;
            while (x > 0)
            {
                if (s[curr] == 'A')
                {
                    x--;
                }
                else
                {
                    x /= 2;
                }
                if (curr == n - 1)
                {
                    curr = 0;
                }
                else
                {
                    curr++;
                }
                ans++;
            }
            cout << ans << nl;
        }
        else
        {
            cout << x << nl;
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