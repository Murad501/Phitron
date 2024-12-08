#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
const int B = 30;

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
        int n, K;
        cin >> n >> K;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        vector<int> bits(B + 1);

        for (int i = 0; i < n; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if ((v[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }

        ll ans = 0;
        for (int k = B; k >= 0; k--)
        {
            if (bits[k] == n)
            {
                ans += (1LL << k);
            }
            else
            {
                int need = n - bits[k];
                if (K >= need)
                {
                    ans += (1LL << k);
                    K -= need;
                }
            }
        }
        cout << ans << nl;
    }

    return 0;
}