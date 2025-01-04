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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    map<ll, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x].push_back(i);
    }

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            ll sum = v[i] + v[j];
            ll need = k - sum;
            if (mp.count(need))
            {
                for (int x : mp[need])
                {

                    if (x != i && x != j)
                    {
                        cout << i + 1 << " " << j + 1 << " " << x + 1 << '\n';
                        ok = true;
                        break;
                    }
                }
                if (ok)
                    break;
            }
        }
        if (ok)
        {
            break;
        }
    }
    if (!ok)
    {
        cout << "IMPOSSIBLE" << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}