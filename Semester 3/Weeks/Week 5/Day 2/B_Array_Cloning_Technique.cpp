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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int maxTimes = 1;
        for (auto [key, value] : mp)
        {
            maxTimes = max(maxTimes, value);
        }

        int ans = 0;
        if (n == maxTimes)
        {
            ans = 0;
        }
        else
        {
            ans = n - maxTimes;
            int value = maxTimes;
            while (value < n)
            {
                value += value;
                ans++;
            }
        }

        cout<<ans<<nl;
    }
    return 0;
}