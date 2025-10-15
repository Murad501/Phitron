// 05/10/2025 22:44
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
    int win = n, loss = 0;
    int ans = 0;
    while (true)
    {
        if (win == 1 && loss == 1)
        {
            ans++;
            break;
        }
        if (loss > 1)
        {
            ans += (loss / 2);
            if (loss & 1)
            {
                loss /= 2;
                loss++;
            }
            else
            {
                loss /= 2;
            }
        }

        if (win > 1)
        {
            ans += (win / 2);
            if (win & 1)
            {
                loss += (win / 2);
                win /= 2;
                win++;
            }
            else
            {
                loss += (win / 2);
                win /= 2;
            }
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