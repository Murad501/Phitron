// 06/08/2025 20:31
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
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         v.push_back(x);
    }
    // sort(all(v));
    int ans = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
         int sum = v[i];
         sum+=(v[i+1]/2);
         ans = min(ans, sum);
    }
    sort(all(v));
    int sum = v[0]+v[1];
    ans = min(ans, sum);
    cout<<ans<<nl;
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