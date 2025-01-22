#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int get_max(map<int, int> mpp)
{
    int mx = INT_MIN;
    for (auto [key, value] : mpp)
    {
        if (value > mx)
        {
            mx = value;
        }
    }
    return mx;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> v, idx;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
        if (x == k)
        {
            idx.push_back(i);
        }
    }

    int k_times = mp[k];
    int ans = 0;
    if (k_times < get_max(mp))
    {

        bool ok = false;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            mp[x]++;
            if (x == k)
            {
                int k_times = mp[k];
                if (k_times >= get_max(mp))
                {
                    ans++;
                    ok = true;
                    break;
                }
            }
        }

        if (!ok)
        {
            mp.clear();
            for (int i = n - 1; i >= 0; i--)
            {
                int x = v[i];
                mp[x]++;
                if (x == k)
                {
                    int k_times = mp[k];
                    if (k_times >= get_max(mp))
                    {
                        ans++;
                        ok = true;
                        break;
                    }
                }
            }
        }
        if (!ok)
        {
            ans = 2;
        }
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}