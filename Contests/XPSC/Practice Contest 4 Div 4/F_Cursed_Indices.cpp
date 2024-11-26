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
        vector<ll> v, preSum;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            if (i == 0)
            {
                preSum.push_back(x);
            }
            else
            {
                preSum.push_back(preSum[i - 1] + x);
            }
        }

        int ans = 0;
        bool isOneCursed = false;
        for (int i = 1; i < n; i++)
        {
            if (preSum[i - 1] >= v[i])
            {
                ans++;
                if (i == 1)
                {
                    isOneCursed = true;
                }
            }
        }
        cout << ans << nl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    return 0;
}