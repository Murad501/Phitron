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
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll colored_a = ((n / a) * p), colored_b = ((n / b) * q);
    ll common = (n / (a / __gcd(a, b) * b));

    if (p < q)
    {
        colored_a -= (common * p);
    }
    else
    {

        colored_b -= (common * q);
    }

    ll ans = colored_a + colored_b;
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}