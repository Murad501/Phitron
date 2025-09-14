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
    ll curr = 2;
    vector<ll> doubles;
    while (curr <= n)
    {
        doubles.push_back(curr);
        curr *= 2;
    }

    set<ll> s;

    ll sz = doubles.size();
    for (ll i = 0; i < sz; i++)
    {
        ll val = doubles[i];
        ll currVal = n / val;
        ll m = sqrt(currVal);
        cout<<val<<" -> ";
        for (ll j = 1; j <= m; j++)
        {
            cout<< j * j<<" ";
            if ((j * j) * val <= n)
            {
                s.insert(val * (j * j));
            }
        }
        cout<<nl;
    }



    cout << s.size() << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}