// 11/07/2025 19:58
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
    string a, b;
    cin>>a>>b;
    int ans = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
         char c1 = a[i], c2 = b[i];
         if(c1 > 90){
            c1-=32;
         }
         if(c2 > 90){
            c2-=32;
         }
         if(c1 < c2){
            ans = -1;
            break;
         }else if(c2 < c1){
            ans = 1;
            break;
         }
    }
    cout<<ans<<nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}