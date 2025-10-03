// 17/09/2025 20:36
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
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x] = i + 1;
    }

    int l = mp[n], r = mp[n];
    bool ok = true;
    int curr = n - 1;
    while (curr >= 1)
    {
        int idx = mp[curr];
        // cout << idx << nl;
        if (idx < l)
        {
            int diff = abs(l - idx);
            if (diff == 1)
            {
                l--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else
        {
            int diff = abs(r - idx);
            if (diff == 1)
            {
                r++;
            }
            else
            {
                ok = false;
                break;
            }
        }
        curr--;
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
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