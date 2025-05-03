// 26/04/2025 14:35
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
    int n, t;
    cin >> n;
    t = n;
    map<int, int> mp;
    for (int i = 0; i < 10; i++)
    {
        int val = t % 10;
        mp[val]++;
        t /= 10;
    }

    for (int i = 1; i <= 10; i++)
    {
        int need = 10 - i;
        auto it = mp.lower_bound(need);
        cout << it->first;
        mp[it->first]--;
        if (mp[it->first] == 0)
        {
            mp.erase(it->first);
        }
    }

    cout << nl;
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