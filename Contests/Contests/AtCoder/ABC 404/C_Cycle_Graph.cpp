// 03/05/2025 18:58
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
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> mp;
    bool ok = false;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
        if (a == 1 || a == n)
        {
            if (b == 1 || b == n)
            {
                ok = true;
            }
        }
    }
    if (!ok)
    {
        cno;
    }
    else
    {
        for (auto [key, value] : mp)
        {
            if (value.size() != 2)
            {
                ok = false;
                break;
            }

            if (key != 1 && key != 4)
            {
                int diff = abs(value[0] - value[1]);
                if (diff != 1)
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}