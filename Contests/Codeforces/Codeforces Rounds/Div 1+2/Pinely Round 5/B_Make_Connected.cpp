// 30/10/2025 23:36
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
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << nl;
    // }
    bool ok = true;
    if (n > 2)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j - 1] && arr[i][j] == '#')
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                break;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i - 1][j] && arr[i][j] == '#')
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                break;
            }
        }



    }
    if (!ok)
    {
        no;
    }
    else
    {
        yes;
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