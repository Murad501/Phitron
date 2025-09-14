// 03/05/2025 18:07
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
    char s[n][n], temp[n][n];
    char t[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t[i][j];
        }
    }

    int mv1 = 0, mv2 = 1, mv3 = 2, mv4 = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] != t[i][j])
            {
                mv1++;
            }
        }
    }

    int l = 0;
    for (int j = 0; j < n; j++)
    {
        int m = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            temp[l][m] = s[i][j];
            m++;
        }
        l++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (temp[i][j] != t[i][j])
            {
                mv2++;
            }
        }
    }

    l = 0;
    for (int j = 0; j < n; j++)
    {
        int m = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            s[l][m] = temp[i][j];
            m++;
        }
        l++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] != t[i][j])
            {
                mv3++;
            }
        }
    }

    l = 0;
    for (int j = 0; j < n; j++)
    {
        int m = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            temp[l][m] = s[i][j];
            m++;
        }
        l++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (temp[i][j] != t[i][j])
            {
                mv4++;
            }
        }
    }

    int ans = min({mv1, mv2, mv3, mv4});
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}