// 11/08/2025 07:24
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
    int k, q;
    cin>>k>>q;
    vector<int>a;
    int mn = INT_MAX;
    for (int i = 0; i < k; i++)
    {
         int x;
         cin>>x;
         a.push_back(x);
         mn = min(mn, x);
    }
    for (int i = 0; i < q; i++)
    {
         int x;
         cin>>x;
         if(x < mn){
            cout<<x<<" ";
         }else{
            cout<<(mn-1)<<" ";
         }
    }
    cout<<nl;
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