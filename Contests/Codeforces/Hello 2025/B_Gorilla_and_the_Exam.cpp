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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    multiset<int> s;

    for (auto [key, value] : mp)
    {
        // cout << key << " " << value << nl;
        s.insert(value);
    }

    while (k)
    {
        if (!s.empty())
        {
            auto it = s.begin();
            if (*it > k)
            {
                break;
            }
            else
            {
                k -= *it;
                s.erase(it);
            }
        }
    }
    int ans = 0;
    if (s.empty())
    {
        ans++;
    }
    else
    {
        ans = s.size();
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