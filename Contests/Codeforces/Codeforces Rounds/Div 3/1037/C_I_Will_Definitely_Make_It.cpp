// 17/07/2025 20:51
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

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    bool ok = true;
    int moment = 0;
    while (true)
    {
        auto it = s.upper_bound(k);
        if (it != s.end())
        {
            int diff = moment + abs(*it - k);
            if (diff > k)
            {
                ok = false;
                break;
            }
            else
            {
                k = *it;
                // moment=diff;
            }
        }
        else
        {
            break;
        }
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