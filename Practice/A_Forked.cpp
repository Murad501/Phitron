// 14/08/2025 09:05
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
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    vector<pair<int, int>> pr = {
        {xk + a, yk + b},
        {xk + a, yk - b},
        {xk - a, yk + b},
        {xk - a, yk - b},
        {xk + b, yk + a},
        {xk + b, yk - a},
        {xk - b, yk + a},
        {xk - b, yk - a}};


    set<pair<int, int>> prr;
    for (int i = 0; i < 8; i++)
    {
        int x = pr[i].first, y = pr[i].second;
        for (int j = 0; j < 8; j++)
        {
            if (x + a == xq && y + b == yq)
            {

                prr.insert({x, y});
            }
            else if (x + a == xq && y - b == yq)
            {

                prr.insert({x, y});
            }
            else if (x - a == xq && y + b == yq)
            {

                prr.insert({x, y});
            }
            else if (x - a == xq && y - b == yq)
            {

                prr.insert({x, y});
            }
            else if (x + b == xq && y + a == yq)
            {

                prr.insert({x, y});
            }
            else if (x + b == xq && y - a == yq)
            {

                prr.insert({x, y});
            }
            else if (x - b == xq && y + a == yq)
            {

                prr.insert({x, y});
            }
            else if (x - b == xq && y - a == yq)
            {

                prr.insert({x, y});
            }
        }
    }
    cout << prr.size() << nl;
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