// 25/07/2025 06:55
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
    deque<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(all(v));
    // for (int i = 0; i < n; i++)
    // {
    //      cout<<v[i]<<" ";
    // }

    while (v.size()>1)
    {
        int first = v[0];
        int second = v[1];
        int avg = (first+second)/2;
        // cout<<first<<" "<<second<<" "<<avg<<nl;
       
        v.pop_front();
        v.pop_front();
        v.push_back(avg);
        sort(all(v));
    }
    cout<<v[0]<<nl;
    
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