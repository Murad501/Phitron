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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<int>());
        vector<ll> preSum;
        preSum.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            preSum.push_back(preSum[i - 1] + v[i]);
        }

        ll ans = 0;
        if (preSum[n - 1] < k)
        {
            ans = k - preSum[n - 1];
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (preSum[i] <= k && preSum[i + 1] > k)
                {
                    if (preSum[i] < k)
                    {
                        ans = k - preSum[i];
                    }
                    break;
                }
            }
        }

        cout << ans << nl;
    }
    return 0;
}