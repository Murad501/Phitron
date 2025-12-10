// 27/10/2025 19:35
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }

    int ans = 0;
    for (int i = 4; i >= 1; i--)
    {
        if (i == 4)
        {
            ans += mp[4];
        }
        else if (i == 3)
        {
            int ones = mp[1];
            ans += mp[3];
            if (ones >= mp[3])
            {
                mp[1] -= mp[3];
            }
            else
            {
                mp[1] = 0;
            }
        }
        else if (i == 2)
        {
            ans += (mp[2] / 2);
            if (mp[2] & 1)
            {
                ans++;
                int ones = mp[1];
                if (ones > 2)
                {
                    mp[1] -= 2;
                }
                else
                {
                    mp[1] = 0;
                }
            }
        }
        else
        {
            int ones = mp[1];
            ans += (ones / 4);
            if (ones % 4)
            {
                ans++;
            }
        }
    }
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}