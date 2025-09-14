// 07/09/2025 21:57
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
    map<int, int> mp, mp2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int curr = 0;

    for (auto [key, value] : mp)
    {
        if (key == curr)
        {
            curr++;
        }
    }
    
    for (auto [key, value] : mp)
    {
        if (value > 1)
        {

            mp2[curr] += value;
        }
        else
        {
            if (key <= curr)
            {
                mp2[key] = 1;
            }
            else
            {
                mp2[curr]++;
            }
        }
    }

    int rem = k - 1;
    if (rem > 0)
    {
        map<int, int> ans;
        if (rem & 1)
        {

            curr = 0;
            for (auto [key, value] : mp2)
            {
                if (value > 1)
                {

                    ans[curr] += value;
                }
                else
                {
                    if (key <= curr)
                    {
                        ans[key] = 1;
                        curr++;
                    }
                    else
                    {
                        ans[curr]++;
                        curr++;
                    }
                }
            }
        }
        else
        {
            mp.clear();
            curr = 0;
            for (auto [key, value] : mp2)
            {
                if (value > 1)
                {

                    mp[curr] += value;
                }
                else
                {
                    if (key <= curr)
                    {
                        mp[key] = 1;
                        curr++;
                    }
                    else
                    {
                        mp[curr]++;
                        curr++;
                    }
                }
            }

            mp2.clear();
            curr = 0;
            for (auto [key, value] : mp)
            {
                if (value > 1)
                {

                    mp2[curr] += value;
                }
                else
                {
                    if (key <= curr)
                    {
                        mp2[key] = 1;
                        curr++;
                    }
                    else
                    {
                        mp2[curr]++;
                        curr++;
                    }
                }
            }
            ans = mp2;
        }

        int ans2 = 0;
        for (auto [key, value] : ans)
        {
            // cout << key << " " << value << nl;
            ans2 += (key * value);
        }
        cout << ans2 << nl;
    }
    else
    {
        int ans = 0;
        for (auto [key, value] : mp2)
        {
            // cout << key << " " << value << nl;
            ans += (key * value);
        }
        cout << ans << nl;
    }
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