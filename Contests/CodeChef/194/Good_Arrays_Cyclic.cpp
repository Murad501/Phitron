// 13/07/2025 21:23
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

    vector<int> a(n, 0), b(n, 0);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                arr[i][j] = 1;
                b[i]++;
            }
            else
            {
                arr[i][j] = 0;
            }
            // cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            a[i] = 1;
        }
    }

    int mod = 1e9 + 7;
    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        int val = b[n - 1];
        if (a[n - 1] == 1)
        {
            val--;
        }
        ans *= (val % mod) % mod;

        for (int j = 0; j < n - 1; j++)
        {
            ans *= (val % mod) % mod;
        }
    }
    cout << ans << nl;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << nl;
    cout << nl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << nl;
    // }
    // cout << nl;
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