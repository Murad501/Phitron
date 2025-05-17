// 11/05/2025 21:48
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
    int arr[n][n];
    int start = 1;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = start; i < n; i++)
    {
        for (int j = start; j < n; j++)
        {
            arr[i][j] = curr;
            curr++;
        }
    }

    for (int i = start - 1; i >= 0; i--)
    {
        for (int j = start; j < n; j++)
        {
            arr[i][j] = curr;
            curr++;
        }
    }
    for (int j = start - 1; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i][j] = curr;
            curr++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
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