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
    cin >> n;
    vector<ll> v, queries;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        ll lowest = -1, highest = -1;
        int l = 0, r = n - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] < x)
            {
                lowest = v[mid];
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        auto it = upper_bound(all(v), x);
        if (it != v.end())
        {
            highest = it - v.begin();
        }
        if (lowest == -1)
        {
            cout << "X";
        }
        else
        {
            cout << lowest;
        }
        if (highest == -1)
        {
            cout << " X";
        }
        else
        {
            cout << " " << v[highest];
        }
        cout << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}