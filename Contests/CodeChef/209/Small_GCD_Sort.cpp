// 22/10/2025 20:31
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
    int n;
    cin>>n;
    vector<int>v;
    map<int, vector<int>>mp;
    for (int i = 1; i <= n; i++)
    {
         int val = __gcd(i, n);
         
         mp[val].push_back(i);
    }
    for(auto[key,values]:mp){
        v.push_back(key);
    }

    sort(rall(v));
    int sz = v.size();
    for (int i = 0; i < sz; i++)
    {
         vector<int>temp = mp[v[i]];
         sort(all(temp));
         int m = temp.size();
         for (int j = 0; j < m; j++)
         {
              cout<<temp[j]<<" ";
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