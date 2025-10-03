// 24/09/2025 20:39
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
    map<int, int> mp;
    // bool ok = true;
    bool od = false, even = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;

        if (x == 1)
        {
            if (i & 1)
            {
                od = true;
            }
            else
            {
                even = true;
            }
        }
    }

    if (mp.size() == 1)
    {
        int val = mp.begin()->first;
        if (val == 2)
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
        if (od && even)
        {
            cno;
        }
        else
        {
            cyes;
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