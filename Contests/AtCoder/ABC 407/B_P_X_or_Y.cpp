// 24/05/2025 18:19
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
    int x, y;
    cin >> x >> y;
    set<pair<int, int>> s;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i + j >= x || abs(i - j) >= y)
            {
                s.insert({i, j});
                s.insert({j, i});
            }
        }
    }
    double sz = s.size();

    double result = sz / 36.0;
    cout << result << setprecision(10) << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}