#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'
const ll MOD = 998244353;

int power(int x,int n){
    int ans=1%MOD;
    while(n){
        if(n&1){ 
            ans=(1LL*ans%MOD*x%MOD)%MOD;
        }
        x=1LL*x*x%MOD;
        n>>=1;
    }
    return ans;
}

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0) {
        ll a = power(2, n - 1);
        ll b = power(2, n - 2);
        ll c = (a + b) % MOD;
        cout << c << endl;
    } else {
        ll a = power(2, n - 1); 
        cout << a << endl;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}