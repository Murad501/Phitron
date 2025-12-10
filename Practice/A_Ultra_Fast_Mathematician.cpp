// 18/10/2025 10:10
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
    string a, b;
    cin>>a>>b;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
         if(a[i] == b[i]){
            cout<<0;
         }else{
            cout<<1;
         }
    }
    cout<<nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}