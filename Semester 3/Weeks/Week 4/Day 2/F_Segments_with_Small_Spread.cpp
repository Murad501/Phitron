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
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> values;
    while (r < n)
    {
        values.insert(a[r]);
        ll mn = *values.begin();
        ll mx = *values.rbegin();
        if (mx - mn <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                mn = *values.begin();
                mx = *values.rbegin();
                if (mx - mn > s)
                {
                    auto it = values.find(a[l]);
                    values.erase(it);
                    l++;
                }
                else
                {
                    break;
                }
            }
            mn = *values.begin();
            mx = *values.rbegin();
            if (mx - mn <= s)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout << ans << nl;

    return 0;
}