// 31/05/2025 20:40
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
    vector<int>p, q;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         p.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         q.push_back(x);
    }

    vector<int>ans;
    
    for (int i = 0; i < n; i++)
    {
         int mx = INT_MIN;
         for (int j = i/2; j > 0; j--)
         {
              int val1 = 
         }
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