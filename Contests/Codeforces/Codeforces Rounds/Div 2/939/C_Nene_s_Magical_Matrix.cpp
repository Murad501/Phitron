// 11/08/2025 08:07
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
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int val = i * n;
        sum += val;
    }

    for (int i = 1; i <= n; i++)
    {
        int curr = n * i;
        int mx = (n * (n + 1)) / 2;
        if (mx > curr)
        {
            sum += mx;
            sum -= curr;
        }
        else
        {
            break;
        }
    }

    cout << sum << " " << (n + (n / 2)) << nl;
    for (int i = 1; i <= n; i++)
    {
        cout << 1 << " " << i << " ";
        if (n == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 1 << " " << n << nl;
        }
    }
    for (int i = 1; i <= n / 2; i++)
    {
        cout << 2 << " " << i << " " << 1 << " " << n << nl;
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