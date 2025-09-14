// 17/06/2025 21:09
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
    int arr[n][m];
    int mx = INT_MIN;
    map<int, set<int>> rw, cl;
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
            int x = arr[i][j];
            mx = max(x, mx);
            mp[x]++;
            rw[x].insert(i + 1);
            cl[x].insert(j + 1);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
            int x = arr[i][j];
            mx = max(x, mx);
            mp[x]++;
            rw[x].insert(i + 1);
            cl[x].insert(j + 1);
        }
    }

    int cnt = mp[mx];

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