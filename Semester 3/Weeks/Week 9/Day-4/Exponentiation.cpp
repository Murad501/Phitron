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
const int MOD = 1e9 + 7;

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll power(int x, int n)
{
    ll ans = 1 % MOD;
    while (n)
    {

        if (n & 1)
        {
            ans = 1LL * (ans % MOD * x % MOD) % MOD;
        }

        x = 1LL * x * x % MOD;
        n >>= 1;
    }
    return ans;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << nl;
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