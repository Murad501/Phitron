// 10/10/2025 20:37
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
    set<int> v;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    cout<<v.size()<<nl;
    // for (int i = 0; i < n; i++)
    // {
        
    //     int cnt = 1;
    //     int curr = v[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j] > curr)
    //         {
    //             cnt++;
    //             curr = v[j];
    //         }
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (v[j] > curr)
    //         {
    //             cnt++;
    //             curr = v[j];
    //         }
    //     }
    //     ans = max(ans, cnt);
    // }
    // cout<<ans<<nl;
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