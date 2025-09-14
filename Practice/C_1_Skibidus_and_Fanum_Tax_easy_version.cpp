// 07/08/2025 09:01
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
    int n, m;
    cin>>n>>m;
    vector<int>a;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         a.push_back(x);
    }
    int x;
    cin>>x;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
         int val = a[i];
         int val2 = x-val;
         if(i == 0){
            a[i] = min(val, val2);
         }else{
            int mn = min(val, val2);
            int mx = max(val, val2);
            int prev = a[i-1];
            if(mn >= prev){
                a[i] = mn;
            }else if(mx >= prev){
                a[i] = mx;
            }else{
                ok = false;
                break;
            }
         }
    }

    if(ok){
        yes;
    }else{
        no;
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