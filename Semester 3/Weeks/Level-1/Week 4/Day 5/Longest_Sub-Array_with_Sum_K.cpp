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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> preSum;
    map<int, int> mp;
    mp.insert({0, 0});

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            preSum.push_back(a[i]);
        }
        else
        {
            preSum.push_back(preSum[i - 1] + a[i]);
        }

        auto it = mp.find(preSum[i]);
        if (it == mp.end())
        {
            mp[preSum[i]] = i + 1;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int dif = preSum[i] - k;
        auto it = mp.find(dif);
        if (it != mp.end())
        {
            ans = max(ans, i - it->second + 1);
        }
    }

    cout << ans << nl;

    return 0;
}