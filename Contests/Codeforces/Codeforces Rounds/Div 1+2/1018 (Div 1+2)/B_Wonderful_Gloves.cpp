// 19/04/2025 20:43
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
    int n, k;
    cin >> n >> k;
    vector<int> ls, rs;
    int lSum = 0, rSum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ls.push_back(x);
        lSum += x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        rs.push_back(x);
        rSum += x;
    }
    sort(ls.rbegin(), ls.rend());
    sort(rs.rbegin(), rs.rend());


    for (int i = 0; i < n; i++)
    {
         cout<<ls[i]<<" ";
    }
    cout<<nl;
    for (int i = 0; i < n; i++)
    {
         cout<<rs[i]<<" ";
    }
    cout<<nl;

    // int ans = 0;
    // if (lSum < rSum)
    // {
    //     ans = rSum;
    //     for (int i = 0; i < k; i++)
    //     {
    //         ans += ls[i];
    //     }
    // }
    // else
    // {
    //     ans = lSum;
    //     for (int i = 0; i < k; i++)
    //     {
    //         ans += rs[i];
    //     }
    // }
    // cout << ans << nl;
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