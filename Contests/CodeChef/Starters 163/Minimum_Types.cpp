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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll> a, b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }

        vector<ll> total;
        for (int i = 0; i < n; i++)
        {
            ll val = a[i] * b[i];
            total.push_back(val);
        }
        sort(total.begin(), total.end(), greater<ll>());

        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += total[i];
            ans++;
            if (sum >= x)
            {
                break;
            }
        }

        if (sum >= x)
        {
            cout << ans << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }

    return 0;
}