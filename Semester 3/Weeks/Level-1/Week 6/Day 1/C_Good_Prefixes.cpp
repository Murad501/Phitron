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
        int n;
        cin >> n;
        vector<ll> v, prefixSum;
        prefixSum.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            prefixSum.push_back(prefixSum[i] + x);
        }

        int ans = 0;
        ll maxV = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxV = max(maxV, v[i]);
            ll remaining = prefixSum[i + 1] - maxV;

            if (remaining == maxV)
            {
                ans++;
            }
        }

        cout << ans << nl;
    }
    return 0;
}