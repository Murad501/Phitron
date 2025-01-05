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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<ll> preSum;
        preSum.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            preSum.push_back(preSum[i - 1] + v[i]);
        }

        ll ans = 0;

        if (preSum[n - 2] > 0)
        {
            ans += preSum[n - 2];
            bool found = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] > 0)
                {
                    found = true;
                }
                else
                {
                    if (found)
                    {
                        ans++;
                    }
                }
            }
        }

        cout << ans << nl;
    }
    return 0;
}