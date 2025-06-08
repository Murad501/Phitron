// 04/06/2025 20:33
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
    int n, c;
    cin>>n>>c;
    vector<int>a,b;
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         a.push_back(x);
         mp[x] = INT_MAX;
     
    }
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         b.push_back(x);
         mp[a[i]] = min(mp[a[i]], x);
         
    }

    int food = 0, cost = 0;

    for(auto [key, value]:mp){
        // cout<<key<<" "<<value<<nl;
        if(value <= c){
            food++;
            cost+=value;
        }
    }
    cout<<(c*food)-cost<<nl;
    // cout<<food<<" "<<cost<<nl;
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