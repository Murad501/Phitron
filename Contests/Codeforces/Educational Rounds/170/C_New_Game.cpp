// 24/07/2025 07:26
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    map<int, vector<int>> mp;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        mpp[x]++;
    }
    // sort(all(a));
    // for (int i = 0; i < n-1; i++)
    // {
    //      if(abs(a[i] - a[i+1]) <=)
    // }

    int previous = -1;
    int seg = 1;
    for (auto [key, value] : mpp)
    {
        if (previous == -1)
        {
            mp[seg].push_back(value);
        }
        else
        {
            if (abs(previous - key) == 1)
            {
                mp[seg].push_back(value);
            }
            else
            {
                seg++;
                mp[seg].push_back(value);
            }
        }
        previous = key;
    }

    // for (auto [key, value] : mpp)
    // {
    //     cout << key << " " << value << nl;
    // }
    // for (auto [key, values] : mp)
    // {
    //     cout << key << " -> ";
    //     for (int i = 0; i < values.size(); i++)
    //     {
    //         cout << values[i] << " ";
    //     }
    //     cout << nl;
    // }

    int ans = 0;
    for (auto [key, values] : mp)
    {
        // sort(values.rbegin(), values.rend());
        int sum = 0;
        if (values.size() <= k)
        {
            sum = accumulate(values.begin(), values.end(), 0LL);
        }
        else
        {
            int sum = 0;
            for (int i = 0; i < k; i++)
            {
                sum += values[i];
            }
            int l = 0, r = k;
            int sz = values.size();

            ans = max(ans, sum);
            while (r < sz)
            {
                sum += values[r];
                sum -= values[l];
                ans = max(ans, sum);
                r++, l++;
            }
        }
        // int sz = values.size();
        // for (int i = 0; i < min(sz, k); i++)
        // {
        //     sum += values[i];
        // }
        ans = max(ans, sum);
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}