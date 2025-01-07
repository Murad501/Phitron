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
    int n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n - 2; i++)
    {
        sum += v[i];
    }
    ll total = v[n - 2] - sum;
    ll ans = v[n - 1] - total;
    cout << ans << nl;
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