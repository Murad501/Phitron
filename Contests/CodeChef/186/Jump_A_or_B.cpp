// 14/05/2025 20:40
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int minVal = min(a, b);
    int maxVal = max(a, b);
    if ((m < (minVal * n)) || (m > (maxVal * n)))
    {
        cno;
    }
    else if (n * minVal == m || n * maxVal == m)
    {
        cyes;
    }
    else
    {
        bool ok = false;

        int l = 1, r = n;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            int one = maxVal * mid;
            int two = minVal * (n - mid);
            if (one + two == m)
            {
                ok = true;
                break;
            }
            else if (one + two > m)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
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