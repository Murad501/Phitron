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
    int n, q;
    cin >> n >> q;
    vector<ll> v, prefix;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            prefix.push_back(x);
        }
        else
        {
            prefix.push_back(prefix[i - 1] + x);
        }

        v.push_back(x);
    }

    for (int i = 0; i < q; i++)
    {
        int m, l = 0, r = n - 1, mid, idx = -1;
        cin >> m;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= m)
            {
                l = mid + 1;
                idx = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (idx == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << prefix[idx] << " ";
        }
    }
    cout << nl;
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