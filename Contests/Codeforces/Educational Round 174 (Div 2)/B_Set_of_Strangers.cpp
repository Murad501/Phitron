#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    int a[n][m];
    vector<int> mv(n * m + 2, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mv[a[i][j]] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if ((i > 0 && a[i - 1][j] == a[i][j]))
            {
                mv[a[i][j]] = 2;
            }
            if ((j > 0 && a[i][j - 1] == a[i][j]))
            {
                mv[a[i][j]] = 2;
            }
        }
    }

    int total = 0, mx = 0;

    for (int i = 0; i <= n * m; i++)
    {
        total += mv[i];
        mx = max(mx, mv[i]);
    }

    cout << total - mx << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}