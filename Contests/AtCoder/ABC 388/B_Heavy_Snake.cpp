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
    int n, D;
    cin >> n >> D;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll t, l;
        cin >> t >> l;
        v.push_back({t, l});
    };

    for (int i = 1; i <= D; i++)
    {
        ll ans = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            pair<ll, ll> pr = v[j];
            ans = max(ans, pr.first * (pr.second + i));
        }
        cout << ans << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}