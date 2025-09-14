// 03/08/2025 23:14
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
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> v;
    int ans = INT_MIN;
    for (auto [key, value] : mp)
    {
        v.push_back(key);
        if (key * value > m)
        {
            ans = max(ans, (m / key) * key);
        }
        else
        {
            ans = max(ans, key * value);
        }
    }

    int k = v.size();
    for (int i = 0; i < k; i++)
    {
        int val = v[i];
        int cnt = mp[val];
        if (i == 0)
        {
            if (cnt * val > m)
            {
                ans = (m / val) * val;
            }
            else
            {
                ans = cnt * val;
            }
        }
        else
        {
            if (abs(v[i] - v[i - 1]) == 1)
            {

                int val2 = v[i - 1];
                int cnt2 = mp[val2];

                int mn = m / val;
                mn = min(mn, cnt);

                for (int j = 1; j <= mn; j++)
                {
                    int sum = val * j;
                    int rem = m - sum;
                    int sec = min(rem / val2, cnt2);
                    sum += (val2 * sec);
                    ans = max(sum, ans);
                }
                mn = m / val2;
                mn = min(mn, cnt2);

                for (int j = 1; j <= mn; j++)
                {
                    int sum = val2 * j;
                    int rem = m - sum;
                    int sec = min(rem / val, cnt);
                    sum += (val * sec);
                    ans = max(sum, ans);
                }
            }
            else
            {
                if (cnt * val > m)
                {
                    ans = max(ans, (m / val) * val);
                }
                else
                {
                    ans = max(ans, cnt * val);
                }
            }
        }
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