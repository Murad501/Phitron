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
    int arr[n][m];
    int sums[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    ll ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll top_left = 0, top_right = 0, bottom_left = 0, bottom_right = 0;
            int I = i, J = j;
            while (I > 0 && J > 0)
            {
                I--;
                J--;
                top_left += arr[I][J];
            }
            I = i, J = j;
            while (I > 0 && J < m - 1)
            {
                I--;
                J++;
                top_right += arr[I][J];
            }
            I = i, J = j;
            while (I < n - 1 && J > 0)
            {
                I++;
                J--;
                bottom_left += arr[I][J];
            }
            I = i, J = j;
            while (I < n - 1 && J < m - 1)
            {
                I++;
                J++;
                bottom_left += arr[I][J];
            }

            ll sum = top_left + top_right + bottom_left + bottom_right + arr[i][j];
            ans = max(ans, sum);
        }
    }
    cout << ans << nl;
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