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
        ll n;
        cin >> n;
        vector<ll> v;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += abs(x);
            v.push_back(x);
        }

        ll ans = 0, l = 0, r = n - 1;
        bool isR = true;

        while (l <= r)
        {

            while (l <= r && ((isR && v[l] < 0) && (isR && v[r] < 0)))
            {
                ans++;
                isR = !isR;
                l++;
                r--;
            }
            while (l <= r && ((!isR && v[l] > 0) && (!isR && v[r] > 0)))
            {
                ans++;
                isR = !isR;
                l++;
                r--;
            }

            if ((isR && (v[l] >= 0)) || (!isR && (v[l] <= 0)))
            {
                l++;
            }
            if ((isR && (v[r] >= 0)) || (!isR && (v[r] <= 0)))
            {
                r--;
            }
        }
        cout << sum << " " << ans << nl;
    }
    return 0;
}