// 06/08/2025 21:00
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
    vector<int> a, b;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    set<int> s, ps;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            s.insert(a[i]);
        }
        ps.insert(a[i]);
        ps.insert(b[i]);
    }

    int ans = 0;
    bool ok = false;
    for (auto key : ps)
    {
        if (ans != key)
        {
            break;
        }
        if (s.count(key))
        {
            ans++;
        }
        else
        {

            if (ok)
            {
                break;
            }
            else
            {
                ok = true;
                ans++;
            }
        }
    }

    cout << ans << nl;
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