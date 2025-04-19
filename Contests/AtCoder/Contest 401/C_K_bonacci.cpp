// 12/04/2025 18:43
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

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll mod = 1e9;
    int n, k;
    cin >> n >> k;
    if (n <= k)
    {
        if(n == k){
            cout<<k<<nl;
        }else{
            cout<<1<<nl;
        }

    }
    else
    {
        ll curr = k;
        for (int i = k + 1; i <= n; i++)
        {
            curr = ((curr * 2) - 1) % mod;
            if (i == n)
            {
                cout << curr << nl;
                return;
            }
        }
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}