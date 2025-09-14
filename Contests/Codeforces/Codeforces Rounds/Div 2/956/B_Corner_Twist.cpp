// 08/08/2025 20:44
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
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = s[j] - '0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            b[i][j] = s[j] - '0';
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == 2)
            {
                b[i][j] -= a[i][j];
            }
            else if (b[i][j] == 1)
            {
                if (a[i][j] == 2)
                {
                    b[i][j] = 2;
                }
                else
                {
                    b[i][j] -= a[i][j];
                }
            }
            else
            {
                if (a[i][j] == 2)
                {
                    b[i][j] = 1;
                }
                else if (a[i][j] == 1)
                {
                    b[i][j] = 2;
                }
            }
        }
    }
    cout << nl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << nl;
    }
    cout << nl;
    cout << nl;
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