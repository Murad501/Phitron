// 09/10/2025 22:16
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
    int ans = 0;
    while (n)
    {
        if(n >= 100){
            ans+= (n/100);
            n%=100;
        }else if(n >= 20){
            ans+= (n/20);
            n%=20;
        }else if(n >= 10){
            ans+= (n/10);
            n%=10;
        }else if(n >= 5){
            ans+= (n/5);
            n%=5;
        }else{
            ans+=n;
            n = 0;
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