// 21/08/2025 21:38
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
    int ans = 0;
    map<int, int> mp;
    while (n)
    {
        int cnt = 1;
        int sum = 3;
        int id = 0;
        for (int i = 1; i <= 32; i++)
        {
            int cnt2 = pow(3, i);
            if (cnt2 <= n)
            {
                cnt = cnt2;
                sum = pow(3, (i + 1)) + (i * pow(3, i - 1));
                id = i;
            }
            else
            {
                break;
            }
        }
        ans += sum;
        mp[id]++;
        n -= cnt;
    }

    int dill = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        int key = it->first, value = it->second;
        // cout << key << " " << value << nl;
        dill += value;
    }
    
    if (dill > k)
    {
        minus;
    }
    else
    {
        k-=dill;
        while (k >= 2)
        {
            auto it = mp.rbegin();
            int ky = it->first, cn = it->second;

            if (ky == 0)
            {
                break;
            }
            int pos = k / 2;
            // cout<<pos<<nl;
            int mn = min(pos, cn);
            mp[ky] -= mn;
            mp[ky - 1] += (mn * 3);
            if (mp[ky] == 0)
            {
                mp.erase(ky);
            }
            k -= (mn * 2);
        }

        int ans2 = 0;
        for (auto [key, value] : mp)
        {
            // cout << key << " " << value << nl;
            if (key == 0)
            {
                ans2 += (3 * value);
            }
            else
            {
                ans2 += (value * (pow(3, (key + 1)) + (key * pow(3, key - 1))));
            }
        }
        // for(auto [key, value]:mp){
        //     cout<<key<<" "<<value<<nl;
        // }

        cout << ans2 << nl;
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