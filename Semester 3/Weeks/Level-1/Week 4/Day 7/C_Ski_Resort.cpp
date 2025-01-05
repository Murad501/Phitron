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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = 0;
        int temp = 0;
        vector<ll> values;
        while (r < n)
        {
            if (a[r] <= q)
            {

                if (k <= r - l + 1)
                {
                    temp = max(temp, r - l + 1);
                }
            }
            else
            {
                if (temp >= k)
                {
                    values.push_back(temp - k + 1);
                }
                temp = 0;
                l = r + 1;
            }
            r++;
        }
        if (temp >= k)
        {
            values.push_back(temp - k + 1);
        }
        ll ans = 0;
        for (int i = 0; i < values.size(); i++)
        {
            int len = values[i];
            ll multi = 1LL * len * (len + 1);
            ans += multi / 2;
        }

        cout << ans << nl;
    }
    return 0;
}