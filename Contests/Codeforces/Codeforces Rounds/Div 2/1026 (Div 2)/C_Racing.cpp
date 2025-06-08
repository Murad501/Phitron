// 24/05/2025 21:41
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
        cin >> x;
        v.push_back(x);
    }
    vector<pair<int, int>> range;
    map<int, vector<int>>mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin>>l>>r;
        mp[l].push_back(i);
    }
    int cnt = 0;
    int h = 0;
    for (int i = 0; i < n; i++)
    {    
         if(v[i] == -1){
            cnt++;
         }else{
            pair<int, int> p = range[i];
            if(p.first > h){

            }
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