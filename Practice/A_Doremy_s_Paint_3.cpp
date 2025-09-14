// 23/07/2025 01:01
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
    int n;
    cin >> n;
    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    if (mp.size() == 1)
    {
        cyes;
    }
    else
    {
        if (mp.size() == 2)
        {
            auto first = mp.begin()->second;
            auto second = mp.rbegin()->second;

            int diff = abs(first - second);
            if (diff <= 1)
            {
                cyes;
            }
            else
            {
                cno;
            }
        }
        else
        {
            cno;
        }
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