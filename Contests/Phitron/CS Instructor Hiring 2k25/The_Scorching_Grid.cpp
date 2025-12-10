// 03/11/2025 21:05
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
    cin >> n >> m;
    char arr[n][m];
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'U')
            {
                pr.push_back({i, j});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << nl;
    }
    int sz = pr.size();
    
    for (int i = 0; i < sz; i++)
    {
         bool vis[n][m];
         int lvl = 0;
         queue<pair<int, int>>qr;
         qr.push({pr[i].first, pr[i].second});
         while (!qr.empty())
         {
            int p = qr.front().first, q = qr.front().second;
            qr.pop();

            

         }
         
         
    }

    cout << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}