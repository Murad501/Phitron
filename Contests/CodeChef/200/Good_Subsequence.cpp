// 20/08/2025 20:35
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> a, b;

    for (int i = 0; i < n; i++)
    {
        int sz = a.size();
        if (sz == 0)
        {
            if (v[i] & 1)
            {
                a.push_back(v[i]);
            }
        }
        else
        {
            if (a[sz - 1] & 1)
            {
                if (v[i] % 2 == 0)
                {
                    a.push_back(v[i]);
                }
            }
            else
            {
                if (v[i] & 1)
                {
                    a.push_back(v[i]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sz = b.size();
        if (sz == 0)
        {
            if (v[i] % 2 == 0)
            {
                b.push_back(v[i]);
            }
        }
        else
        {
            if (b[sz - 1] & 1)
            {
                if (v[i] % 2 == 0)
                {
                    b.push_back(v[i]);
                }
            }
            else
            {
                if (v[i] & 1)
                {
                    b.push_back(v[i]);
                }
            }
        }
    }

    cout<<max(a.size(), b.size())<<nl;
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