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
    ll n, x, y;
    cin >> n >> x >> y;
    ll x_cnt = n / x;
    ll y_cnt = n / y;
    ll cmn = n / ((x * y) / __gcd(x, y));
    x_cnt -= cmn;
    y_cnt -= cmn;

    ll m = (n - x_cnt) + 1;
    ll y_sum = (1LL * y_cnt * (y_cnt + 1)) / 2;
    ll x_sum = (1LL * (n - m + 1) * (n + m)) / 2;
    cout << x_sum - y_sum << nl;
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