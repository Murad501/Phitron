// 03/06/2025 22:11
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
    vector<int> v(n);
    v[0] = 1;
    v[1] = 2;
    for (int i = 2; i < n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        int l, w, h;
        cin >> l >> w >> h;
        for (int j = 0; j < n; j++)
        {
             
        }
        
    }
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