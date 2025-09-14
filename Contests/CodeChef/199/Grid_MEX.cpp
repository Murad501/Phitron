// 13/08/2025 21:22
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     int l = 0, r = i;
    //     while (r >= 0)
    //     {
    //         if (l == r)
    //         {
    //             arr[r][l] = 0;
    //         }
    //         else
    //         {
    //             arr[r][l] = i;
    //         }
    //         r--, l++;
    //     }
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     int c = i, r = n - 1;
    //     while (c < n)
    //     {
    //         if (c == r)
    //         {

    //             arr[r][c] = 0;
    //         }
    //         else
    //         {
    //             arr[r][c] = n - (i + 1);
    //             // cout << r<<" "<<c << nl;
    //         }
    //         r--, c++;
    //     }
    // }

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < n; j++)
         {
              cout<<curr<<" ";
              if(j < n - 1){
                curr++;
              }
              if(curr == n){
                curr = 0;
              }
         }
         cout<<nl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << nl;
    // }
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