// 16/05/2025 16:06
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
    int cnt = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            cnt++;
        }
        l++;
        r--;
    }
    // cout << cnt << nl;
    if (n & 1)
    {
        for (int i = 0; i <= n; i++)
        {
            if (i >= cnt && i <= n - cnt)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << nl;
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            if (i < cnt || (i + cnt) > n)
            {
                cout << 0;
            }
            else
            {
                if (cnt % 2 == i % 2)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << nl;
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