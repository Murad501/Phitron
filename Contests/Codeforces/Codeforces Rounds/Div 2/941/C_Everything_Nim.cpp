// 08/08/2025 11:53
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
    vector<int> v, a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));

    a.push_back(v[0]);
    map<int, int> mp;
    mp[v[0]]++;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > 0)
        {
            a.push_back(v[i + 1] - v[i]);
            mp[(v[i + 1] - v[i])]++;
        }
    }

    int m = a.size();
    // cout << m << " " << mp.size() << nl;
    // for (int i = 0; i < m; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << nl;
    if (mp.size() == 1)
    {
        if (mp[1] == 0)
        {
            cout << "Alice" << nl;
        }
        else
        {
            if (m & 1)
            {
                cout << "Alice" << nl;
            }
            else
            {
                cout << "Bob" << nl;
            }
        }
    }
    else
    {
        // cout << "hello" << nl;
        bool ok = true;
        for (int i = 0; i < m; i++)
        {
            if (a[i] > 1)
            {
                if ((i + 1) % 2 == 0)
                {
                    ok = false;
                }
                break;
            }
        }

        if (ok)
        {
            cout << "Alice" << nl;
        }
        else
        {
            cout << "Bob" << nl;
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