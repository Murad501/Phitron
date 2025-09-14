// 07/09/2025 20:54
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
    int a, b;
    cin >> a >> b;
    int ans = -1;
    // for (int i = 1; i * i <= b; i++)
    // {
    //     if (b % i == 0)
    //     {
    //         int sum = (a * i) + (b / i);
    //         if (sum % 2 == 0)
    //         {
    //             ans = max(ans, sum);
    //         }
    //         int sum2 = (a * (b / i)) + (b / (b / i));
    //         if (sum2 % 2 == 0)
    //         {
    //             ans = max(ans, sum2);
    //         }
    //     }
    // }

    // int ans = -1;
    if ((a & 1) && (b & 1))
    {
        ans = a * b;
        ans++;
    }
    else if (b % 2 == 0)
    {
        if (a & 1)
        {
            int val = (b / 2);
            if (val % 2 == 0 && (b / val) % 2 == 0)
            {
                ans = (a * (b / 2)) + (b / (b / 2));
            }
        }
        else
        {

            ans = (a * (b / 2)) + (b / (b / 2));
        }
    }
    // cout << ans << nl;
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