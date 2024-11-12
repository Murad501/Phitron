#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> cars;
        vector<ll> outlets;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cars.push_back(x);
        }
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            outlets.push_back(x);
        }
        sort(cars.begin(), cars.end(), greater<ll>());
        sort(outlets.begin(), outlets.end(), greater<ll>());

        ll ans = 0;
        for (ll i = 0; i < min(n, m); i++)
        {
            ll carCap = cars[i];
            ll outCap = outlets[i] * h;
            if (outCap > carCap)
            {
                ans += carCap;
            }
            else
            {
                ans += outCap;
            }
        }

        cout << ans << nl;
    }
    return 0;
}