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
    ll n;
    cin >> n;
    vector<ll> v;
    multiset<ll> mt;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    mt.insert(v[0]);
    for (ll i = 1; i < n; i++)
    {
        ll current = v[i];

        auto it = mt.lower_bound(i);
        if (it != mt.end())
        {
            ll index = distance(mt.begin(), it);
            ll count = mt.size() - index;
            current += count;
        }
        v[i] = current;
        mt.insert(current);
    }

    for (int i = 0; i < n; i++)
    {
        ll val = v[i];
        ll need = n - (i + 1);

        val -= need;

        if (val >= 0)
        {
            cout << val << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}