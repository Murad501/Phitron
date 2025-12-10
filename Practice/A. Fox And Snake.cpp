// 23/10/2025 22:46
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
    int n, m;
    cin>>n>>m;
    char arr[n][m];
    for (int i = 0; i < n; i+=2)
    {
         for (int j = 0; j < m; j++)
         {
              arr[i][j] = '#';
         }
    }
    for (int i = 1; i < n; i+=2)
    {
         if((i + 1) % 4 == 0){
            arr[i][0]='#';
            for (int j = 1; j < m; j++)
            {
                 arr[i][j]='.';
            }
         }else{
            arr[i][m-1]='#';
            for (int j = 0; j < m -1; j++)
            {
                 arr[i][j]='.';
            }
         }
    }

    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < m; j++)
         {
              cout<<arr[i][j];
         }
         cout<<nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}