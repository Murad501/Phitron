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

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = mp.upper_bound(x);

        if (it == mp.end())
        {
            mp[x]++;
            ans++;
        }
        else
        {
            mp[it->first]--;
            if (mp[it->first] == 0)
            {
                mp.erase(it->first);
            }
            mp[x]++;
        }
    }

    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}