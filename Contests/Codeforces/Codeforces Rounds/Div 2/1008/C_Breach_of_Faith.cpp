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
    set<ll> s;
    for (int i = 0; i < n * 2; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    map<int, ll> mp;
    mp.insert({1, *s.rbegin()});
    ll pos = *s.rbegin();
    ll neg = 0;
    int idx = 2;
    for (auto val : s)
    {
        if (val == *s.rbegin())
        {
            continue;
        }
        mp[idx] = val;
        if (idx % 2 == 0)
        {
            neg += val;
        }
        else
        {
            pos += val;
        }
        idx++;
    }

    cout << pos - neg << " ";

    for (auto [key, value] : mp)
    {
        cout << value << " ";
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