// 08/08/2025 10:52
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
    cin>>n>>k;
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         mp[x]++;
    }

    vector<int>v;
    for(auto[key, value]:mp){
        v.push_back(value);
    }
    sort(v.rbegin(), v.rend());
    // for (int i = 0; i < v.size(); i++)
    // {
    //      cout<<v[i]<<" ";
    // }
    // cout<<nl;
    // cout<<nl;

    int stock = 0;
    int l = 0, r = v.size();
    while (l < r)
    {
        int sum = stock+v[l];
       
        if(sum >= k){
            v[l] = 0;
            int pos = sum/k;
            if(sum % k){
                pos++;
            }
            // cout<<sum<<" "<<pos<<nl;
            stock = sum - pos;
        }else{
            break;
        }
        l++;
    }

    if(stock >= k){
        stock = k-1;
    }

    int ans= accumulate(v.begin(),v.end(), 0) + stock;
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