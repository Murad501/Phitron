// 05/10/2025 22:58
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
    int n, k;
    cin >> n >> k;
    int rem = (n * n) - k;
    if (rem == 1)
    {
        no;
    }
    else
    {
        yes;
        char arr[n][n];
        int cnt = 0;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (cnt < k)
                {
                    arr[i][j] = 'U';
                    cnt++;
                }
                else
                {
                    if (i == n - 1)
                    {
                        idx = j;
                        break;
                    }
                    else
                    {
                        arr[i][j] = 'D';
                    }
                }
            }
        }
        int l = idx, r = n - 1;
        if (idx > -1)
        {
            while (l <= r)
            {
                arr[n - 1][l] = 'R';
                arr[n - 1][r] = 'L';
                l++, r--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << nl;
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