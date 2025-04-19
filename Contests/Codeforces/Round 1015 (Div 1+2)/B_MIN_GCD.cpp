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
    vector<ll> v;

    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll minVal = mp.begin()->first;

    for (auto [key, value] : mp)
    {
        if (key == minVal)
        {
            if (value > 1)
            {
                cyes;
                return;
            }
        }
        else
        {
            if (key % minVal == 0)
            {

                v.push_back(key);
            }
        }
    }

    if (v.size() < 2)
    {
        cno;
    }
    else
    {
        ll currAns = __gcd(v[0], v[1]);
        int sz = v.size();
        // cout<<sz<<" "<<minVal<<nl;
        for (int i = 2; i < sz; i++)
        {
            currAns = __gcd(currAns, v[i]);
        }
        if (currAns == minVal)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
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