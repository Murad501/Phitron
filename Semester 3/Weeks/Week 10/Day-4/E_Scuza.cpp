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
    int n, q;
    cin >> n >> q;
    vector<ll> v, mx, prefix;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (i == 0)
        {
            prefix.push_back(x);
            mx.push_back(x);
        }
        else
        {
            prefix.push_back(prefix[i - 1] + x);
            mx.push_back(max(mx[i - 1], x));
        }
    }

    while (q--)
    {
        ll x;
        cin >> x;

        ll ans = 0;

        int k = upper_bound(mx.begin(), mx.end(), x) - mx.begin() - 1;
      
        if (k >= 0)
        {
            ans = prefix[k];
        }
        cout << ans << " ";
    }
    cout<<nl;
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