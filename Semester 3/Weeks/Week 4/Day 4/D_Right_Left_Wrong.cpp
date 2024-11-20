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

        string s;
        cin >> s;
        vector<ll> preSum(n);

        preSum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            preSum[i] = preSum[i - 1] + v[i];
        }

        int l = 0, r = n - 1;
        ll ans = 0;
        while (l < r)
        {
            while (s[l] == 'R' && l < r)
            {
                l++;
            }
            while (s[r] == 'L' && l < r)
            {
                r--;
            }
            if (s[l] == 'L' && s[r] == 'R')
            {

                if (l == 0)
                {
                    ans += preSum[r];
                }
                else
                {
                    ans += preSum[r] - preSum[l - 1];
                }
            }
            l++;
            r--;
        }
        cout << ans << nl;
    }
    return 0;
}